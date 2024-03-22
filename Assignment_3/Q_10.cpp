#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;

    while (n)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    cout << "Sum of total number of digits in the number are : " << sum;

    return 0;
}