#include <iostream>
using namespace std;
#define PI 3.14159265359

int main(void)
{

    double radius, areaOfCircle;

    cout << "We need to Calculate the area of the circle : \n";
    cout << "So, Enter the radius of the circle : ";
    cin >> radius;
    areaOfCircle = 2 * PI * (radius * radius);
    cout << "\n\n";
    cout << "Area of the circle : " << areaOfCircle;
}
