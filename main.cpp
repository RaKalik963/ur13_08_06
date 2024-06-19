#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const int full_memory_size = 1000;
    int arr1[full_memory_size];
    int arr2[full_memory_size] = { 0 };
    int size;
    do
    {
        cout << "Enter the size of the array(0 - 1000): ";
        cin >> size;
    } while (size > 1000 || size < 0);

    for (size_t i = 0; i < size; i++)
    {
        arr1[i] = rand() % 10;
    }

    int* ptr1 = arr1;
    int* ptr2 = arr2 + size - 1; 

    for (int i = 0; i < size; i++)
    {
        *ptr2 = *ptr1; 
        ptr1++;
        ptr2--;
    }

    cout << "Array 1: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\nArray 2: ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
