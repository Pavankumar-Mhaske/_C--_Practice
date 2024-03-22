#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n + 1; i++)
    {
        sum = sum + i * i;
    }
    cout << "Sum of first " << n << " natural numbers is : " << sum;
    return 0;
}