#include <iostream>
using namespace std;

class Box
{
    float length, breadth, height;

    void setLength(int length)
    {

        this->length = length;
    }
    void setBreadth(int breadth)
    {
        this->breadth = breadth;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    float getLength(void)
    {
        return (this->length);
    }
    float getBreadth(void)
    {
        return (this->breadth);
    }
    float getHeight(void)
    {
        return (this->height);
    }

public:
    void input(float, float, float);
    void display(void);
    double volume(void);
};

void Box::input(float length, float breadth, float height)
{
    setLength(length);
    setBreadth(breadth);
    setHeight(height);
}
void Box::display(void)
{
    cout << "Length = " << getLength() << ", breadth = " << getBreadth() << ", height = " << getHeight() << " " << endl;
}
double Box::volume(void)
{
    return (getLength() * getBreadth() * getHeight());
}

int main(void)
{
    Box b1, b2;
    b1.input(1, 2, 3);
    b1.display();
    cout << "\nVolume is : " << b1.volume() << endl;
    b2.display();
    return 0;
}