#include <iostream>
using namespace std;
#include <typeinfo>
#include <iomanip>

class Result
{
    bool resulted;
    int total_attempt, net_right, net_wrong, marks_for_right, marks_for_wrong;

public:
    Result()
    {
        marks_for_right = 0;
        marks_for_wrong = 0;
    }
    void setResult(int, int, int, int, int);
    void showResult(void);
};

void Result::setResult(int total_attempt, int net_right, int net_wrong, int marks_for_right, int marks_for_wrong)
{
    this->total_attempt = total_attempt;
    this->net_right = net_right;
    this->net_wrong = net_wrong;
    this->marks_for_right = marks_for_right;
    this->marks_for_wrong = marks_for_wrong;

    if (marks_for_right > marks_for_wrong)
        this->resulted = true;
    else
        this->resulted = false;
}
void Result::showResult(void)
{
    // cout << "Resulted : " << typeid(this->resulted).name() << endl;
    cout << "Resulted : " << boolalpha << this->resulted << endl;
    cout << "Total Attempts : " << this->total_attempt << endl;
    cout << "Net right : " << this->net_right << endl;
    cout << "Net Wrong : " << this->net_wrong << endl;
    cout << "Marks for right : " << this->marks_for_right << endl;
    cout << "Marks for wrong : " << this->marks_for_wrong << endl;
}

int main(void)
{
    Result r1, r2;
    r1.setResult(1, 5, 6, 10, 19);
    r1.showResult();
    cout << endl;
    r2.setResult(1, 8, 2, 16, 4);
    r2.showResult();
    // bool result = true;
    // cout << boolalpha << result;

    return 0;
}