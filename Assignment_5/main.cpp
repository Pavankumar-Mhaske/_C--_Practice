// #include <iostream>
// using namespace std;

#include "functions.cpp"
int main(void)
{
    // // Area of the circle -
    // float r;
    // cout << "enter the radius of the circle : ";
    // cin >> r;
    // cout << "Area of the circle is - " << AreaOfCircle(r) << " sq. units";

    // // Even or Odd
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // cout << "Is even ? " << isEven(num);

    // // Prime or Non-Prime
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // cout << "Is Prime ? " << isPrime(num);

    // // Next prime number
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // cout << "Next prime number is : " << nextPrimeNumber(num);

    // // Prime numbers between two numbers
    // int start, end;
    // cout << "Enter starting number : ";
    // cin >> start;
    // cout << "\nEnter ending number : ";
    // cin >> end;
    // cout << "\n\nprime numbers between two numbers are : " << endl;
    // primeNums(start, end);

    // // factorial of number
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // cout << "factorial of the number is : " << facto(num);

    // // permutation of arranging r items out of n items
    // int r, n;
    // cout << "Enter value of r : ";
    // cin >> r;
    // cout << "Enter value of n : ";
    // cin >> n;
    // cout << "permutation is : " << perm(r, n);

    // // combination of selecting r items out of n items
    // int r, n;
    // cout << "Enter value of r : ";
    // cin >> r;
    // cout << "Enter value of n : ";
    // cin >> n;
    // cout << "combination is : " << combi(r, n);

    // // Pascal triangle
    // int n;
    // cout << "Enter a Power of the binomial expression : ";
    // cin >> n;
    // cout << "pascal triangle is : " << endl;
    // // pascal(n);
    // // printPascalTriangle(n);

    // // LCM
    // int num1, num2;
    // cout << "enter two numbers : ";
    // cin >> num1 >> num2;
    // cout << "lcm is : " << lcm(num1, num2);

    // // HCF
    // int num1, num2;
    // cout << "enter two numbers : ";
    // cin >> num1 >> num2;
    // try
    // {
    //     cout << "lcm is : " << hcf(num1, num2);
    // }
    // catch (const std::runtime_error &e)
    // {
    //     std::cerr << "Error : " << e.what();
    // }

    // Fibonacci
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Fibonacci series is : ";
    fibonacci(num);

    return 0;
}