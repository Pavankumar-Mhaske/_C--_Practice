#include <iostream>
#include <string.h>
using namespace std;

class Account
{
    char account_no[5];
    double balance;
    static float rate_of_interest;

public:
    void setBalance(double);
    void setAccountNo(char *);
    double getBalance();
    char *getAccountNo();
    static void setRateOfInterest(float);
    static float getRateOfInterest();
};

float Account::rate_of_interest;

void Account::setBalance(double balance)
{
    this->balance = balance;
}
void Account::setAccountNo(char *account_no)
{
    strcpy(this->account_no, account_no);
}
double Account::getBalance()
{
    return this->balance;
}
char *Account::getAccountNo()
{
    return this->account_no;
}
void Account::setRateOfInterest(float rate_of_interest)
{
    Account::rate_of_interest = rate_of_interest;
}
float Account::getRateOfInterest()
{
    return rate_of_interest;
}

int main(void)
{
    Account a;
    char an[] = "12345";
    a.setAccountNo(an);
    a.setBalance(2000);
    cout << "Account No : " << a.getAccountNo() << endl;
    cout << "Balance : " << a.getBalance() << endl;
    a.setRateOfInterest(7.5);
    cout << "ROI : " << a.getRateOfInterest() << endl;

    return 0;
}