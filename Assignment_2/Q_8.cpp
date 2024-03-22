#include <iostream>
using namespace std;

int main(void)
{

    int year;
    cout << "enter a year : ";
    cin >> year;

    if (year % 400)
        if (year % 100 != 0 && year % 4 == 0)
            cout << "Leap year ";
        else
            cout << "Not Leap year";
    else
        cout << "Leap year";
}