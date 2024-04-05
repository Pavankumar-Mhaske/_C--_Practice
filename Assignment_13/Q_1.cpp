#include <iostream>
using namespace std;

class Complex
{
    double real, imag;

public:
    // Complex() {}
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i){};
    void setData(double, double);
    void showData(void);
    Complex operator-(void);
    // Prefix increment operator overloading
    Complex &operator++();
    // Postfix increment operator overloading
    Complex operator++(int);
    // Prefix decrement operator overloading
    Complex &operator--();
    // Postfix decrement operator overloading
    Complex operator--(int);
};

void Complex::setData(double r, double i)
{
    real = r;
    imag = i;
}
void Complex::showData(void)
{
    cout << real << "+" << imag << "i" << endl;
}
Complex Complex::operator-(void)
{
    return Complex(-real, -imag); // -> he object created and returned by the line return 'Complex(-real, -imag);' is an unnamed temporary object of the Complex class.
}
Complex &Complex::operator++()
{
    cout << "inside pre++";
    real++; // or  ++real;
    imag++; // or  ++imag;
    return *this;
}

Complex Complex::operator++(int)
{
    cout << "inside post++";

    Complex temp(*this);
    // real++; // or  ++real;
    // imag++; // or  ++imag;
    operator++();
    return temp;
}

Complex &Complex::operator--()
{
    cout << "inside pre--";

    real--; // or  --real;
    imag--; // or  --imag;
    return *this;
}

Complex Complex::operator--(int)
{
    cout << "inside post--";

    Complex temp(*this);
    // real--; // or  --real;
    // imag--; // or  --imag;
    operator--();
    return temp;
}

int main(void)
{
    Complex c1, c2(4, 5);
    c1.setData(2, 3);
    c1.showData();
    c2.showData();
    // c1 = -c2;
    c1 = c2++;
    c1.showData();

    return 0;
}