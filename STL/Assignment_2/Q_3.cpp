#include <iostream>
#include <array>
using namespace std;

class Complex
{
    double real, img;

public:
    Complex(double r = 0, double i = 0) : real(r), img(i)
    {
    }
    Complex operator+(Complex);
    // setter
    void setVal(double, double);
    // getter
    Complex getVal(void);

    void showComplex(void);
};
Complex Complex::operator+(Complex T)
{
    Complex c;
    c.real = real + T.real;
    c.img = img + T.img;
    return c;
}
// setter
void Complex::setVal(double r, double i)
{
    real = r;
    img = i;
}
// getter
Complex Complex::getVal(void)
{
    Complex c;
    c.real = real;
    c.img = img;
    return c;
}

void Complex::showComplex(void)
{
    cout << real << "+" << img << "i" << endl;
}

int main(void)
{

    Complex c1(1, 2), c2(2, 4), c3(4, 5), c4;
    // c4 = c1 + c2 + c3;
    c4.showComplex();

    array<Complex, 3> arr = {c1, c2, c3};

    for (auto val : arr)
    {
        c4 = c4 + val;
        c4.showComplex();
    }
    c4.showComplex();

    return 0;
}