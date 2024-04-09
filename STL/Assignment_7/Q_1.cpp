#include <iostream>
#include <deque>
#include <vector>
using namespace std;

void reverseDeque(deque<int> &d);
vector<int> dequeToVector(deque<int> d);

int main(void)
{
    //
    deque<int> d1;
    //
    for (int i = 1; i <= 5; ++i)
        d1.push_back(i * 10);
    //
    for (auto val : d1)
        cout << val << " ";
    cout << endl;
    //
    d1.pop_front();
    //
    for (auto val : d1)
        cout << val << " ";
    cout << endl;
    //
    d1.emplace_back(60);
    //
    deque<int>::iterator it1 = d1.begin(), it2 = d1.end();
    for (it1; it1 != it2; ++it1)
        cout << *it1 << " ";
    cout << endl;

    //
    for (it1 = d1.begin(); it1 != it2; ++it1)
        if (*it1 == 30)
            break;

    d1.emplace(++it1, 35);
    //
    for (auto val : d1)
        cout << val << " ";
    cout << endl;

    reverseDeque(d1);
    cout << "Reversing the deque : ";
    //
    for (auto val : d1)
        cout << val << " ";
    cout << endl;
    //
    vector<int> v = dequeToVector(d1);

    //
    cout << "Vector : ";
    for (auto val : v)
        cout << val << " ";
    cout << endl;

    //
    cout << "Original Deque : ";
    for (auto val : d1)
        cout << val << " ";
    cout << endl;

        //
    cout << "Original Deque : ";
    for (auto val : d1)
        cout << val << " ";
    cout << endl;

    return 0;
}

void reverseDeque(deque<int> &d)
{
    int size = d.size();
    for (int i = 0; i < size / 2; ++i)
    {
        int temp = d[i];
        d[i] = d[size - 1 - i];
        d[size - 1 - i] = temp;
    }
}
vector<int> dequeToVector(deque<int> d)
{
    vector<int> v;
    for (int val : d)
        v.push_back(val);
    return v;
}
