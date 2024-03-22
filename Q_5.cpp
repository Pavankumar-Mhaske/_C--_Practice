#include <iostream>
// using namespace std;
int main(void)
{
    double base, height, areaOfTriangle;

    std::cout << "We need to Calculate the area of the Triangle : \n";
    std::cout << "So, Enter the base and height of the Triangle : \n\n";
    std::cout << "Enter the Base - ";
    std::cin >> base;
    std::cout << "\nEnter the height - ";
    std::cin >> height;
    areaOfTriangle = 0.5 * base * height;
    std::cout << "\n\n";
    std::cout << "Area of the Triangle : " << areaOfTriangle;
}