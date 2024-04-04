#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    void setTime(int, int, int);
    void showTime(void);
};

void Time::setTime(int hour, int min, int sec)
{
    this->hour = hour;
    this->min = min;
    this->sec = sec;
}

void Time::showTime(void)
{
    cout << this->hour << " hr : " << this->min << " min : " << this->sec << " sec ";
}

int main(void)
{
    Time t;
    int hour, min, sec;
    cout << "Enter the time: ";
    cin >> hour >> min >> sec;
    t.setTime(hour, min, sec);
    t.showTime();

    return 0;
}