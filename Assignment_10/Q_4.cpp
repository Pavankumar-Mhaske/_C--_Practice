#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class Operations
{

    static double PI;

public:
    Operations()
    {
        Operations::PI = 3.14159265359;
    }
    double area(float radius);
    double area(float length, float width);
    friend int add(int, int);
    friend float add(float, float);
    friend char *add(char *, char *);
};

double Operations::PI;

double Operations::area(float radius)
{
    return (Operations::PI * radius * radius);
}
double Operations::area(float length, float width)
{
    return (length * width);
}

int add(int a, int b)
{
    cout << "inside int : ";
    return a + b;
}
float add(float a, float b)
{
    cout << "inside float : ";
    return a + b;
}
char *add(char *x, char *y)
{
    return strcat(x, y);
    // return x;
}

int main(void)
{
    Operations o1;
    cout << "Area of circle : " << o1.area(10) << endl;
    cout << "Area of rectangle : " << o1.area(5, 2) << endl;
    cout << "adding int : " << add(2, 5) << endl;
    cout << "adding float : " << add(2.5f, 5.2f) << endl;
    char n1[] = "pavan ";
    char n2[] = "mhaske";
    cout << "adding string : " << add(n1, n2);

    return 0;
}