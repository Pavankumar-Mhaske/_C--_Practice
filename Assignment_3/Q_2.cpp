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
        cout << n << " ";
        n--;
    }

    return 0;
}