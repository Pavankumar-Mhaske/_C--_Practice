#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int n, count = 0;
    cout << "Enter a number : ";
    cin >> n;

    while (n)
    {
        count++;
        n /= 10;
    }
    cout << "Total number of digits in the number are : " << count;

    return 0;
}