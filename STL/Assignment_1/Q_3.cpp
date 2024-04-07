#include <iostream>
#include <algorithm>
using namespace std;

template <class T, size_t N>
void sortArray(T (&arr)[N])
{
    std::sort(arr, arr + N);
}

int main(void)
{

    // Integer array
    int intArray[] = {5, 2, 9, 1, 6, 8, 3, 7, 4, 10};
    sortArray(intArray);
    std::cout << "Sorted Integer Array:";
    for (int i : intArray)
    {
        std::cout << " " << i;
    }
    std::cout << std::endl;

    // Double array
    double doubleArray[] = {5.5, 2.2, 9.9, 1.1, 6.6, 8.8, 3.3, 7.7, 4.4, 10.0};
    sortArray(doubleArray);
    std::cout << "Sorted Double Array:";
    for (double d : doubleArray)
    {
        std::cout << " " << d;
    }
    std::cout << std::endl;

    // Character array
    char charArray[] = {'e', 'b', 'g', 'a', 'f', 'i', 'c', 'h', 'd', 'j'};
    sortArray(charArray);
    std::cout << "Sorted Character Array:";
    for (char c : charArray)
    {
        std::cout << " " << c;
    }
    std::cout << std::endl;

    return 0;
}