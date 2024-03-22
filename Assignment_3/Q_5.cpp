#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i + 1;
    }
    cout << "Sum of first " << n << " natural numbers is : " << sum;
    return 0;
}