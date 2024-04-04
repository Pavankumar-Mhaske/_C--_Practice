#include <iostream>
#include <iomanip>
using namespace std;

class Time
{

    int hour, min, sec;
    void normalize(void);

public:
    void setTime(int, int, int);
    void showTime(void);
    Time operator+(Time);
    Time operator-(Time);
    bool operator>(Time);
};

void Time::normalize(void)
{
    if (this->sec > 60)
    {
        ++(this->min);
        this->sec = this->sec - 60;
    }
    if (this->min > 60)
    {
        ++(this->hour);
        this->min = this->min - 60;
    }

    if (this->min < 0)
    {
        if (this->hour < 0)
        {
            ++(this->hour);
            this->min = 60 + this->min;
        }
        else if (this->hour > 0)
        {

            --(this->hour);
            this->min = 60 + this->min;
        }
    }
    if (this->sec < 0)
    {
        --(this->min);
        this->sec = 60 + this->sec;
    }
}
void Time::setTime(int h, int m, int s)
{
    hour = h;
    min = m;
    sec = s;
}
void Time::showTime(void)
{
    cout << hour << " : " << min << " : " << sec << " " << endl;
}
Time Time::operator+(Time x)
{
    Time t;
    t.hour = this->hour + x.hour;
    t.min = this->min + x.min;
    t.sec = this->sec + x.sec;
    t.normalize();
    return t;
}
Time Time::operator-(Time x)
{
    Time t;
    t.hour = this->hour - x.hour;
    t.min = this->min - x.min;
    t.sec = this->sec - x.sec;
    t.normalize();
    return t;
}
bool Time::operator>(Time x)
{

    if (this->hour >= x.hour)
    {
        if (this->hour > x.hour)
            return true;
        else
        {
            if (this->min >= x.min)
            {
                if (this->min > x.min)
                    return true;
                else
                {

                    if (this->sec > x.sec)
                        return true;

                    else
                        return false;
                }
            }
            else
                return false;
        }
    }
    else
        return false;
}

int main(void)
{
    Time t1, t2, t;
    t1.setTime(2, 40, 50);
    t2.setTime(1, 40, 50);
    t1.showTime();
    t2.showTime();
    // t = t1.operator+(t2);
    t = t1 + t2;
    t.showTime();
    // t = t1.operator-(t2);
    t = t1 - t2;
    t.showTime();

    // cout << "t1>t2 : " << boolalpha << t1.operator>(t2) << endl;
    cout << "t1>t2 : " << boolalpha << (t1 > t2);

    return 0;
}