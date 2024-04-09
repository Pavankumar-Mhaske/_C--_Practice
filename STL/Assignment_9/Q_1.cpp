#include <iostream>
#include <queue>
#include <list>
#include <stack>
using namespace std;

queue<int, list<int>> reverseQueue(queue<int, list<int>> q);
vector<int> queueToVector(queue<int, list<int>> q);

int main(void)
{
    queue<int, list<int>> q1;
    //
    for (int i = 1; i <= 5; ++i)
        q1.push(i * 10);
    //
    cout << "Front : " << q1.front() << " | Back : " << q1.back() << endl;
    //
    q1.pop();
    //
    cout << "Front : " << q1.front() << " | Back : " << q1.back() << endl;
    //
    q1 = reverseQueue(q1);
    //
    cout << "Front : " << q1.front() << " | Back : " << q1.back() << endl;
    //
    vector<int> v = queueToVector(q1);
    cout << "Vector : ";
    for (int val : v)
        cout << val << " ";
    cout << endl;
    //
    cout << "Front : " << q1.front() << " | Back : " << q1.back() << endl;
    return 0;
}

queue<int, list<int>> reverseQueue(queue<int, list<int>> q)
{
    queue<int, list<int>> newQueue;
    stack<int> s;

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        newQueue.push(s.top());
        s.pop();
    }
    return newQueue;
}
vector<int> queueToVector(queue<int, list<int>> q)
{
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    return v;
}