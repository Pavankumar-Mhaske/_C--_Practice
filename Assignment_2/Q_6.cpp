#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "enter a number : ";
    cin >> num;

    if (num > 0)
        cout << "Positive";
    else if (num < 0)
        cout << "Negative";
    else
        cout << "Zero";

    return 0;
}