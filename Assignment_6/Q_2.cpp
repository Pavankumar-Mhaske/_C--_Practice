#include <iostream>
using namespace std;

void natural(int);

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    natural(n);

    return 0;
}

void natural(int n)
{
    if (n == 1)
        cout << n << " ";
    else
    {
        cout << n << " ";
        natural(n - 1);
    }
}