#include <iostream>
using namespace std;

int main(void)
{
    double Side, volumOfCuboid;

    cout << "We need to Calculate the volume of the Cuboid : \n";
    cout << "So, Enter the Length of a side of the Cuboid : \n\n";
    cout << "Enter the side Side - ";
    cin >> Side;
    volumOfCuboid = Side * Side * Side;
    cout << "\n\n";
    cout << "Volume of the Cuboid : " << volumOfCuboid << " cubic units ";
}