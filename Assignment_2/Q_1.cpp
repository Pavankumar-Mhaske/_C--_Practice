#include <iostream>
using namespace std;

int main(void)
{
    int number;
    cout << "Enter a number :";
    cin >> number;

    if (number % 7 == 0)
    {
        cout << "The number is divisible by 7";
    }
    else
    {
        cout << "The number is not divisible by 7";
    }
}