#include <iostream>
using namespace std;

int main()
{
    int array[10], size;
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
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}