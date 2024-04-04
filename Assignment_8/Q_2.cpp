#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    int empid;
    char name[50];
    float salary;

public:
    void setEmployeeId(int id)
    {
        empid = id;
    }
    void setEmployeeName(char n[])
    {
        strcpy(name, n);
    }
    void setEmployeeSalary(float s)
    {
        salary = s;
    }
    void showEmployee()
    {
        cout << "\nEmpid = " << this->getEmpId() << "\nName = " << this->getName() << "\nSalary = " << this->getSalary() << endl
             << endl;
    }
    int getSalary()
    {
        return salary;
    }
    float getEmpId()
    {
        return empid;
    }
    char *getName()
    {
        return name;
    }
};

int main(void)
{
    Employee e;
    e.setEmployeeId(10);
    char n[] = "pavan";
    e.setEmployeeName(n);
    e.setEmployeeSalary(6000000);
    e.showEmployee();
    cout << "Salary = " << e.getSalary() << endl;
    cout << "EmpId = " << e.getEmpId() << endl;
    cout << "Name = " << e.getName() << endl;

    return 0;
}