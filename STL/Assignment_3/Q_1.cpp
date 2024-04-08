#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    vector<int> v;
    for (int i = 0, a; i < 4; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (auto val : v)
        cout << val*val << " ";
    return 0;
}