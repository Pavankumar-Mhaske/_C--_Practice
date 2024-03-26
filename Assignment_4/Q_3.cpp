#include <iostream>
#include <conio.h>
using namespace std;
void fibonacci(int);
int main(void)
{

    int n;
    cout << "enter a number : ";
    cin >> n;

    if (n < 1)
        cout << " Invalid input. Please enter a positive integer." << std::endl;

    fibonacci(n);

    return 0;
}

void fibonacci(int n)
{
    int prev = 0;
    int curr = 1;

    for (int i = 0; i < n; ++i)
    {
        cout << prev << " ";

        int next = prev + curr;
        prev = curr;
        curr = next;
    }
}