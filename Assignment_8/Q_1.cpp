#include <iostream>
using namespace std;

class Array
{
    int array[10];

public:
    void inputArrayElements();
    int findMaxElement();
    int findMinElement();
    void sort();
    void editElement(int index, int newData);
    int sumOfElement();
    float averageOfElements();
    void showArrayElements();
};

void Array::inputArrayElements()
{
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
}
int Array::findMaxElement()
{
    int max = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
int Array::findMinElement()
{
    int min = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}
void Array::sort()
{
    int turn = 10;
    while (--turn > 0)
    {
        int flag = 1;
        for (int i = 0; i < 9; i++)
        {
            if (array[i] > array[i + 1])
            {
                flag = 0;
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        if (flag)
            turn = 0;
    }
}
void Array::editElement(int index, int newData)
{
    array[index] = newData;
}
int Array::sumOfElement()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum = sum + array[i];
    return sum;
}
float Array::averageOfElements()
{
    return sumOfElement() / 10.00;
}
void Array::showArrayElements()
{
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    Array a;
    a.inputArrayElements();
    a.showArrayElements();
    cout << "Max = " << a.findMaxElement() << endl;
    cout << "Min = " << a.findMinElement() << endl;
    a.sort();
    a.showArrayElements();
    a.editElement(9, 0);
    a.showArrayElements();
    cout << "sum is : " << a.sumOfElement() << endl;
    cout << "average is : " << a.averageOfElements() << endl;
    return 0;
}