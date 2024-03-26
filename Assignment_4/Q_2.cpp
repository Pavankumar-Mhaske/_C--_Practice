#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);

int main(void)
{
    int n1, n2;
    cout << "Enter two numbers : ";
    cin >> n1 >> n2;

    for (n1; n1 < n2; n1)
        if (isPrime(++n1))
            cout << n1 << " ";

    return 0;
}

bool isPrime(int n)
{
    int squreRoot = sqrt(n);
    if (n > 1)
        for (int i = 2; i <= squreRoot; ++i)
            if (n % i)
                continue;
            else
                return false;
    else
        return false;

    return true;
}