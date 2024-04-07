#include <iostream>
using namespace std;

/**
 * &arr: This part indicates that arr is a reference to an array. Using a reference (&) allows the function to work 
  directly with the original array rather than making a copy of it. This is important for efficiency when dealing 
  with large arrays.
 */
template <typename T, size_t N>
void printArray(T (&arr)[N])
{

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    int intArray[] = {1, 2, 3, 4, 5};
    printArray(intArray);

    // Character array
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    printArray(charArray);

    // Double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printArray(doubleArray);

    // Float array
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    printArray(floatArray);

    // String array
    std::string stringArray[] = {"apple", "banana", "cherry", "date"};
    printArray(stringArray);
    return 0;
}