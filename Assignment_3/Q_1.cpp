#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    return 0;
}