#include <iostream>
#include <ctime>

using namespace std;

int sumArray(int* array, int size) {
    int sum = 0;
    int* ptr = array;

    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }

    return sum;
}

int main() {
    srand(time(0));
    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = sumArray(arr, size);
    cout << "Sum of ellements in array = " << sum << endl;

    delete[] arr; 

    system("pause");
    return 0;
}
