#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imaginary;

public:
    void setComplex(float, float);
    void showComplex(void);
};

void Complex::setComplex(float real, float imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

void Complex::showComplex(void)
{
    cout << this->real << "+" << this->imaginary << "i";
}

int main(void)
{
    Complex c1;
    float a, b;
    cout << "Enter the values for the complex number : ";
    cin >> a >> b;
    c1.setComplex(a, b);
    c1.showComplex();
    return 0;
}