#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cout << "Enter the two number : ";
    cin >> a >> b;
    cout << "\tbefore swaping : \n\na = " << a << "\nb = " << b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\n\n";
    cout << "\tafter swaping : \n\na = " << a << "\nb = " << b;
    // a =  a + b - a = b
    // b =  a + b - b = a
}