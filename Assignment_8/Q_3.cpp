#include "Employee.cpp"

void displayEmployees(Employee[], int);
void sortEmployeesBySalary(Employee[], int);
void sortEmployeesByName(Employee[], int);
void sortEmployeesByEmpId(Employee[], int);

int main(void)
{
    char names[10][50] = {"prasann", "dinesh", "ganesh", "amar", "raj", "hitesh", "ravi", "priya", "ashvini", "shalmali"};

    Employee e1(5, names[0], 60), e2(4, names[1], 50), e3(2, names[2], 80), e4(3, names[3], 70), e5(1, names[4], 90);
    Employee array[5] = {e1, e2, e3, e4, e5};
    int size = (sizeof(array) / sizeof(array[0]));

    displayEmployees(array, size);
    sortEmployeesBySalary(array, size);
    cout << "\nAfter the sorting by salary : " << endl;
    displayEmployees(array, size);
    cout << "\nAfter the sorting by name : " << endl;
    sortEmployeesByName(array, size);
    displayEmployees(array, size);
    cout << "\nAfter the sorting by empid : " << endl;
    sortEmployeesByEmpId(array, size);
    displayEmployees(array, size);
    // cout << strcmp("amar", "aman");
    return 0;
}

void displayEmployees(Employee arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].showEmployee();
    }
}

void sortEmployeesBySalary(Employee arr[], int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        int flag = 1;
        for (int i = 0; i < size - 1; i++)
        {
            if ((arr[i]).getSalary() > (arr[i + 1]).getSalary())
            {
                flag = 0;
                Employee e = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = e;
            }
        }
        if (flag)
            j = size - 1;
    }
}

void sortEmployeesByName(Employee arr[], int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        int flag = 1;
        for (int i = 0; i < size - 1; i++)
        {
            if (strcmp((arr[i].getName()), (arr[i + 1].getName())) == 1)
            {
                flag = 0;
                Employee e = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = e;
            }
        }
        if (flag)
            j = size - 1;
    }
}

void sortEmployeesByEmpId(Employee arr[], int size)
{

    for (int j = 0; j < size - 1; j++)
    {
        int flag = 1;
        for (int i = 0; i < size - 1; i++)
        {
            if ((arr[i]).getEmpId() > (arr[i + 1]).getEmpId())
            {
                flag = 0;
                Employee e = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = e;
            }
        }
        if (flag)
            j = size - 1;
    }
}