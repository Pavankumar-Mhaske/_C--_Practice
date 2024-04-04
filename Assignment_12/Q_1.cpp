#include <iostream>
using namespace std;

class Complex
{
    float real, imaginary;

public:
    void setData(float, float);
    void showData(void);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    bool operator==(Complex);
};

void Complex::setData(float real, float imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}
void Complex::showData(void)
{
    cout << real << "+" << imaginary << "i" << endl;
}
Complex Complex::operator+(Complex x)
{
    Complex c;
    c.real = this->real + x.real;
    c.imaginary = this->imaginary + x.imaginary;
    return c;
}
Complex Complex::operator-(Complex x)
{
    Complex c;
    c.real = this->real - x.real;
    c.imaginary = this->imaginary - x.imaginary;
    return c;
}
Complex Complex::operator*(Complex x)
{
    Complex c;
    c.real = this->real * x.real;
    c.imaginary = this->imaginary * x.imaginary;
    return c;
}
bool Complex::operator==(Complex x)
{
    return ((this->real == x.real) && (this->imaginary == x.imaginary));
}

int main(void)
{
    Complex c1, c2, c;
    c1.setData(2, 5);
    c2.setData(4, 6);
    c1.showData();
    c2.showData();

    c = c1.operator+(c2);
    c.showData();
    c = c1.operator-(c2);
    c.showData();
    c = c1.operator*(c2);
    c.showData();
    cout << "equal? : " << c1.operator==(c2);
    return 0;
}