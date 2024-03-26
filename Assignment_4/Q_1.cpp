#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // if (n > 2)
    //     for (int i = n; n > 1; n)
    //         if (i % --n)
    //             continue;
    //         else
    //             break;
    // else
    //     n = -1;

    int squreRoot = sqrt(n);
    if (n > 1)
        for (int i = 2; i <= squreRoot; i++)
            if (n % i)
                continue;
            else
            {
                n = -1;
                break;
            }
    else
        n = -1;

    n == -1
        ? cout << "it's not a prime numbeer"
        : cout << "it's prime number ";

    return 0;
}