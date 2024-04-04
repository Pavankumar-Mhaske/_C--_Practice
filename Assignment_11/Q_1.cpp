#include <iostream>
using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex() {}
    Complex(float real, float imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void setData(float, float);
    void showData(void);
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

int main(void)
{
    Complex c1, c2(5, 6);
    c1.setData(1, 3);
    c1.showData();
    c2.showData();
    return 0;
}