#include <iostream>
using namespace std;
#include <cmath>
int main(void)
{
    float a, b, c;
    cout << "Enter three sides of the triangle : ";
    cin >> a >> b >> c;

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    {
        cout <<"Right Angled Triangle";
    }
    else
    {
        cout <<"Not a right angled triangle";
    }
}