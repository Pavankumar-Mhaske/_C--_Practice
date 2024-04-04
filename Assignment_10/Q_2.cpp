#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    void setTime(int, int, int);
    void showTime(void);
    Time addition(Time);
    Time subtraction(Time);
    void normalize(void);
};
void Time::setTime(int hour, int min, int sec)
{
    this->hour = hour;
    this->min = min;
    this->sec = sec;
}
void Time::showTime(void)
{
    cout << this->hour << " : " << this->min << " : " << this->sec << " " << endl;
}
Time Time::addition(Time x)
{
    Time t;
    t.hour = this->hour + x.hour;
    t.min = this->min + x.min;
    t.sec = this->sec + x.sec;
    t.normalize();
    return t;
}
Time Time::subtraction(Time x)
{
    Time t;
    t.hour = this->hour - x.hour;
    t.min = this->min - x.min;
    t.sec = this->sec - x.sec;
    t.normalize();
    return t;
}
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
        --(this->hour);
        this->min = 60 + this->min;
    }
    if (this->sec < 0)
    {
        --(this->min);
        this->sec = 60 + this->sec;
    }
}

int main(void)
{

    Time t1, t2;
    t1.setTime(5, 40, 50);
    t2.setTime(2, 50, 60);
    t1.showTime();
    t2.showTime();
    Time t;

    t = t1.addition(t2);
    t.showTime();
    t = t1.subtraction(t2);
    t.showTime();
    return 0;
}