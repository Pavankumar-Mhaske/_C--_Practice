#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
    int a, b;
    cout << "enter two number : ";
    cin >> a >> b;
    if (a > b)
        cout << a << " > " << b;
    else if (a == b)
        cout << a << " == " << b;
    else
        cout
            << b << " > " << a;

    return 0;
}