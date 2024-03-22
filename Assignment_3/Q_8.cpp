#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i < n + 1; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of first " << n << " natural numbers is : " << fact;
    return 0;
}