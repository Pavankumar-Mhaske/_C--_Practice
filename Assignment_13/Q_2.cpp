#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    void setTime(int, int, int);
    void showTime(void);
    Time operator!(void);
    Time &operator++();
    Time operator++(int);
    Time &operator--();
    Time operator--(int);
};

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
Time Time::operator!(void)
{
    if (hour != 0 || min != 0 || sec != 0)
    {
        hour = min = sec = 0;
    }
    else
    {
        hour = 1;
        min = 0;
        sec = 0;
    }
    return (*this);
}
Time &Time::operator++()
{
    sec++;
    return (*this);
}
Time Time::operator++(int)
{
    Time temp(*this);
    operator++();
    return temp;
}
Time &Time::operator--()
{
    sec--;
    return (*this);
}
Time Time::operator--(int)
{
    Time temp(*this);
    operator--();
    return temp;
}

int main(void)
{
    Time t1, t2;
    t1.setTime(4, 50, 40);
    t1.showTime();
    // t2 = !t1;
    // t2.showTime();
    // t2 = !t2;
    t2 = t1--;
    t1.showTime();
    t2.showTime();

    return 0;
}