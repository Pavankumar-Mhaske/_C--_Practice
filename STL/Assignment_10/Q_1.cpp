#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Batsman
{
    int totalRuns;
    int highestScore;
    int totalMatches;

public:
    Batsman(int r = 0, int s = 0, int m = 0) : totalRuns(r), highestScore(s), totalMatches(m){};
    int getHighestScore()
    {
        return highestScore;
    }
    void showData()
    {
        cout << "Total runs: " << totalRuns << endl;
        cout << "Highest Score: " << highestScore << endl;
        cout << "Total Matches: " << totalMatches << endl;
        cout << endl;
    }
};
class compareScore
{
public:
    bool operator()(Batsman &b1, Batsman &b2)
    {
        // greater with score : greatest is the priority
        return (b1.getHighestScore() < b2.getHighestScore());
    }
};

void priorityQueueToVector(priority_queue<Batsman, vector<Batsman>, compareScore> pq, vector<Batsman> &vec);
int main(void)
{
    //
    priority_queue<Batsman, vector<Batsman>, compareScore> pq1, q;
    //
    Batsman Rahul(2510, 121, 44), Rohit(3111, 147, 72), Virat(1088, 89, 20), Shikhar(1920, 182, 31), Pankaj(890, 54, 22);
    //
    // pq1 = {Rahul, Rohit, Virat, Shikhar, Pankaj};
    vector<Batsman> v = {Rahul, Rohit, Virat, Shikhar, Pankaj};
    for (Batsman &BatsmanVal : v)
        pq1.push(BatsmanVal);
    //
    Batsman topBatsman = pq1.top();
    cout << "Highest Scorer batsman's Data : ";
    topBatsman.showData();
    //
    pq1.pop();
    cout << endl;
    //
    topBatsman = pq1.top();
    cout << "Highest Scorer batsman's Data : ";
    topBatsman.showData();
    //
    vector<Batsman> vec;
    priorityQueueToVector(pq1, vec);
    cout << "Vector data : ---------------------------------" << endl;
    for (Batsman &val : vec)
        val.showData();
    cout << "Vector data : ---------------------------------" << endl;

    //
    topBatsman = pq1.top();
    cout << "Highest Scorer batsman's Data : ";
    topBatsman.showData();

    return 0;
}

void priorityQueueToVector(priority_queue<Batsman, vector<Batsman>, compareScore> pq, vector<Batsman> &vec)
{
    while (!pq.empty())
    {
        vec.push_back(pq.top());
        pq.pop();
    }
    return;
}