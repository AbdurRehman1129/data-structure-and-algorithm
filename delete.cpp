#include <iostream>
using namespace std;

int main()
{
    int array[10], size, index;
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
    cout << "\nArray before deletetion: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    // delete
    cout << "\nEnter index where you want to delete element: ";
    cin >> index;
    for (int i = index; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    cout << "\nArray after deletetion: " << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}