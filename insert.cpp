#include <iostream>
using namespace std;

int main()
{
    int array[10], size, index, element;
    while (true)
    {
        cout << "Enter size of array: ";
        cin >> size;
        if (size <= 10)
            break;
        else
            cout << "Array size should be less than or equal to 10. ";
        continue;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Array Elements: ";
        cin >> array[i];
    }
    cout << "Array before insertion\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\nEnter index where you want to add element: ";
    cin >> index;
    cout << "Enter element you want to add: ";
    cin >> element;
    for (int i = size + 1; i >= index; i--)
    {
        array[i] = array[i - 1];
    }
    array[index] = element;
    cout << "Array after insertion\n";
    for (int i = 0; i < size + 1; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
