#include <iostream>
#include <array>
using namespace std;

int main(void)
{

    array<int, 10> arr;

    array<int, 10>::iterator it1 = arr.begin(), it2 = arr.end();

    for (it1; it1 != it2; ++it1)
    {
        int i;
        cin >> i;
        *it1 = i;
    }

    for (auto val : arr)
    {
        if (val & 1)
            cout << val << " ";
    }

    return 0;
}