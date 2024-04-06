#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char name[50];
    int age;

public:
    // setters
    void setName(char[]);
    void setAge(int);
    // getters
    char *getName(void);
    int getAge(void);
};
class Employee : public Person
{
    int empid;
    double salary;
    static int counter;

protected:
    void setEmpid()
    {
        empid = ++counter;
    }
    static int getEmployeeCount(void)
    {
        return counter;
    }

public:
    Employee(double s = 0.0) : salary(s)
    {
        setEmpid();
    }

    void setEmployeeData(char[], int, double);
    void showEmployeeData(void);
    int countEmployee(void);
};

int Employee::counter = 0;
void Employee::setEmployeeData(char n[], int a, double s)
{
    setName(n);
    setAge(a);
    salary = s;
}
void Employee::showEmployeeData(void)
{
    cout << "name : " << getName() << ", age : " << getAge() << ", empid : " << empid << ", salary : " << salary << "," << endl;
}
int Employee::countEmployee(void)
{
    return getEmployeeCount();
}

// setters
void Person::setName(char n[])
{
    strcpy(name, n);
    return;
}
void Person::setAge(int a)
{
    age = a;
    return;
}
// getters
char *Person::getName(void)
{
    return name;
}
int Person::getAge(void)
{
    return age;
}

int main(void)
{
    Person p;
    char n[] = "pavan";
    p.setName(n);
    p.setAge(20);
    cout << p.getName() << endl;
    cout << p.getAge() << endl;

    Employee e, e1, e2;
    e.setEmployeeData(n, 20, 60);
    e.showEmployeeData();
    e2 = e;
    e2.showEmployeeData();

    cout << "Employee count : " << e.countEmployee();

    return 0;
}