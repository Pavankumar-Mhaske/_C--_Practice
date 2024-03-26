#define PI 3.1415926535897932385
#include <cmath>
#include <iostream>
#include <conio.h>
#include <stdexcept>
using namespace std;

double AreaOfCircle(float);
int isEven(int);
int isPrime(int);
int nextPrimeNumber(int);
void primeNums(int, int);
double facto(int);
double perm(int, int);
double combi(int, int);
void pascal(int);
void printPascalTriangle(int);
int lcm(int, int);
int hcf(int, int);
void fibonacci(int);

double AreaOfCircle(float r)
{

    return PI * r * r;
}

int isEven(int num)
{
    if (num % 2)
        return 0;
    else
        return 1;
}

int isPrime(int n)
{
    if (n < 2)
        return 0;
    float squareRoot = sqrt(n);

    for (int i = 2; i <= squareRoot; i++)
    {
        if (n % i)
            return 1;
        else
            return 0;
    }
}

int nextPrimeNumber(int n)
{
    while (true)
    {
        if (isPrime(++n))
            return n;
        else
            continue;
    }
}

void primeNums(int start, int end)
{
    if (start > end)
    {
        cout << "Invalid range: start should be less than or equal to end." << std::endl;
        return;
    }
    while (start < end)
    {
        if (isPrime(++start))
            cout << start << " ";
    }
}

double facto(int n)
{
    if (n < 0)
    {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return 0.0; // Return 0.0 as an indication of failure
    }
    double factorial = 1.0;
    while (n)
    {
        factorial = factorial * (n--);
    }
    return factorial;
}

double perm(int r, int n)
{
    if (r > n)
    {
        cout << "Invalid range: r should be less than or equal to n." << std::endl;
        return -1.0;
    }
    return (facto(n) / facto(n - r));
}

double combi(int r, int n)
{
    if (r > n)
    {
        cout << "Invalid range: r should be less than or equal to n." << std::endl;
        return -1.0;
    }
    return (facto(n) / (facto(r) * facto(n - r)));
}

void pascal(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, r = 0; j < 2 * n; j++)
        {
            if (j >= n - i && j <= n + i)
            {
                int val = combi(r, i);
                cout << val << "     "; // then 2*n-1 is the gap here
                r++;
                j++;
                // getch(); // for debugging :-
            }
            else
                cout << "   "; // if n is the gap here
        }
        cout << endl;
    }
}

void printPascalTriangle(int n)
{
    for (int line = 1; line <= n; ++line)
    {
        int C = 1; // Initialize C for the first value in each row

        // Print spaces to align triangle
        for (int space = 1; space <= n - line; ++space)
        {
            std::cout << "  ";
        }

        // Print values in the current row
        for (int i = 1; i <= line; ++i)
        {
            std::cout << C << "   ";
            C = C * (line - i) / i; // Calculate the next binomial coefficient
        }

        std::cout << std::endl; // Move to the next line after each row
    }
}

// a = a+b = a+b-a;
// b = a+b-b = a
int lcm(int a, int b)
{
    if (a < 1 || b < 1)
        if (a == 0 || b == 0)
            return 0;
        else
        {
            if (a < 0)
                a *= -1;
            else
                b *= -1;
        }

    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (int number = b; true; ++number)
    {
        if (number % a == 0 && number % b == 0)
            return number;
    }
}

int hcf(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    else if (a == 1 || b == 1)
        return 1;
    else if (a < 0 || b < 0)
        throw runtime_error("HCF can be calculated for positive numbers only!");

    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (int number = a; true; --number)
    {
        if (a % number == 0 && b % number == 0)
            return number;
    }
}

void fibonacci(int n)
{
    int curr = 0, next = 1;
    // if (n = 1)
    //     cout << curr << " ";
    // if (n = 2)
    //     cout << next << " ";

    while (n--)
    {
        cout << curr << " ";
        int temp = curr + next;
        curr = next;
        next = temp;
    }
}
