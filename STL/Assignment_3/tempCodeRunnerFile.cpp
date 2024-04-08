#include <conio.h>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    vector<int> v1;
    vector<int>::iterator it1;
    //
    v1.push_back(10);
    //
    v1.insert(v1.begin(), 20);
    //
    v1.insert(v1.begin() + 1, 4, 30);
    //
    int a = 11, b = 12, c = 13;
    v1.insert(v1.begin() + 2, {a, b, c});
    //
    for (int val : v1)
        cout << val << " ";
    cout << endl;
    //
    vector<int> v2;
    //
    vector<int>::reverse_iterator it2 = v1.rbegin();
    int n = 5;
    for (n; n > 0; --n)
    {
        v2.push_back(*(++it2));
    }

    for (int val : v2)
        cout
            << val << " ";
    return 0;
}