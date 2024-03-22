#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    while (n)
    {
        cout << 2 * n - 1 << " ";
        n--;
    }

    return 0;
}