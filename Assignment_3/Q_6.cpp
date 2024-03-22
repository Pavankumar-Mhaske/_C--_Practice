#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i < 11; i++)
    {
        cout << i * n << endl;
    }

    return 0;
}