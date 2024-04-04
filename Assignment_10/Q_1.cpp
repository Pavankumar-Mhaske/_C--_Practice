#include <iostream>
using namespace std;

class Complex
{
    float real, imaginary;

public:
    void setData(float, float);
    void showData(void);
    Complex addition(Complex);
    Complex subtraction(Complex);
    Complex multiplication(Complex);
};

void Complex::setData(float real, float imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}
void Complex::showData(void)
{
    cout << this->real << "+" << this->imaginary << "i" << endl;
}
Complex Complex::addition(Complex x)
{
    Complex c;
    c.real = this->real + x.real;
    c.imaginary = this->imaginary + x.imaginary;
    return c;
}
Complex Complex::subtraction(Complex x)
{
    Complex c;
    c.real = this->real - x.real;
    c.imaginary = this->imaginary - x.imaginary;
    return c;
}
Complex Complex::multiplication(Complex x)
{
    Complex c;
    c.real = this->real * x.real;
    c.imaginary = this->imaginary * x.imaginary;
    return c;
}

int main(void)
{
    Complex c1, c2;
    c1.setData(2, 5);
    c2.setData(4, 7);
    c1.showData();
    c2.showData();

    Complex c = c1.addition(c2);
    c.showData();

    c = c1.subtraction(c2);
    c.showData();

    c = c1.multiplication(c2);
    c.showData();

    return 0;
}