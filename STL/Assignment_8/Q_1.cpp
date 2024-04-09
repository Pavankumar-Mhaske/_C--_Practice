#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

stack<int, vector<int>> reverseStack(stack<int, vector<int>> s);
vector<int> StackToVector(stack<int, vector<int>> &s);

int main(void)
{
    stack<int, vector<int>> s1;
    //
    for (int i = 1; i <= 5; ++i)
        s1.push(i * 10);
    //
    cout << "Top : " << s1.top() << endl;
    //
    s1.pop();
    //
    cout << "Top : " << s1.top() << endl;
    //
    s1 = reverseStack(s1);
    //
    cout << "Top : " << s1.top() << endl;
    //
    vector<int> v = StackToVector(s1);
    for (int val : v)
        cout << val << " ";
    cout << endl;
    //
    cout << "Top : " << s1.top() << endl;
    return 0;
}

stack<int, vector<int>> reverseStack(stack<int, vector<int>> s)
{
    stack<int, vector<int>> newStack;
    while (!s.empty())
    {
        newStack.push(s.top());
        s.pop();
    }

    return newStack;
}

vector<int> StackToVector(stack<int, vector<int>> &s)
{
    vector<int> v1;
    stack<int, vector<int>> s1;
    s1 = s;
    while (!s1.empty())
    {
        v1.push_back(s1.top());
        s1.pop();
    }
    return v1;
}