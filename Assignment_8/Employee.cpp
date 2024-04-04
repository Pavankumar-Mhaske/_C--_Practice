#include <iostream>
using namespace std;
#include <string.h>

class Employee
{
    int empid;
    char name[50];
    float salary;

public:
    Employee()
    {
    }
    // Employee(int empid, char name[], float salary)
    Employee(int empid, char *name, float salary)
    {
        this->empid = empid;
        strcpy(this->name, name);
        this->salary = salary;
    }
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
        cout << "\nEmpid = " << this->getEmpId() << " Name = " << this->getName() << " Salary = " << this->getSalary() << endl;
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
