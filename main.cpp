#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const int full_memory_size = 1000;
    int arr1[full_memory_size];
    int* p_arr1 = arr1;
    int size;
    do
    {
        cout << "Enter the size of the array(0 - 1000): ";
        cin >> size;
    } while (size > 1000 || size < 0);

    for (size_t i = 0; i < size; i++)
    {
        arr1[i] = rand() % 25;
    }

    cout << "Array 1: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int* p_end = arr1 + size - 1;

    while (p_arr1 < p_end) {
        int temp = *p_arr1;
        *p_arr1 = *p_end;
        *p_end = temp;
        p_arr1++;
        p_end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
