#include <iostream>
using namespace std;

class Box
{

    float length, breadth, height;

public:
    void setDimensions(float, float, float);
    void showDimensions(void);
    Box();
    Box(float, float, float);
    Box(float);
};

Box::Box() {}
Box::Box(float l, float b, float h)
{
    length = l;
    breadth = b;
    height = h;
}
Box::Box(float dimension)
{
    length = dimension;
    breadth = dimension;
    height = dimension;
}

void Box::setDimensions(float l, float b, float h)
{
    length = l;
    breadth = b;
    height = h;
}
void Box::showDimensions(void)
{
    cout << "length = " << length << " breadth = " << breadth << " height = " << height << endl;
}

int main(void)
{
    Box b1, b2(10, 20, 30), b3(5);
    b1.setDimensions(1, 2, 3);
    b1.showDimensions();
    b2.showDimensions();
    b3.showDimensions();
    return 0;
}