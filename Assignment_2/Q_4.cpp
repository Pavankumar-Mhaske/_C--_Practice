#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
    float a, b, c;
    double delta;
    cout << "Enter coefficients in the quadratic equation...";
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta < 0)
        cout << "Imaginary";
    else if (delta == 0)
        cout << "Real and Equale";
    else
        cout << "Real and Unequale";
}