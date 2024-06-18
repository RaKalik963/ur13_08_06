#include <iostream>
#include <ctime>

using namespace std;



#include <iostream>

using namespace std;

void add(int* a, int* b, int* result) 
{
    *result = *a + *b;
}

void subtract(int* a, int* b, int* result) 
{
    *result = *a - *b;
}

void divide(int* a, int* b, int* result) 
{
    if (*b != 0) {
        *result = *a / *b;
    }
    else {
        cout << "Division by zero is not allowed." << endl;
    }
}

void multiply(int* a, int* b, int* result) 
{
    *result = *a * *b;
}

int main()
{
    int* x = new int;
    int* y = new int;
    int* result = new int;
    int* choice = new int;

    while (true)
    {
        cout << "\tMENU" << endl;
        cout << "\tChoose option." << endl;
        cout << "\t1 = addition." << endl;
        cout << "\t2 = subtraction." << endl;
        cout << "\t3 = division." << endl;
        cout << "\t4 = multiplication." << endl;
        cout << "\t5 = exit." << endl;
        cout << "Enter your choice: ";
        cin >> *choice;

        if (*choice == 5) {
            break;
        }

        cout << "Enter first number: ";
        cin >> *x;
        cout << "Enter second number: ";
        cin >> *y;

        switch (*choice)
        {
        case 1:
            add(x, y, result);
            cout << "Result: " << *result << endl;
            break;
        case 2:
            subtract(x, y, result);
            cout << "Result: " << *result << endl;
            break;
        case 3:
            divide(x, y, result);
            if (*y != 0) {
                cout << "Result: " << *result << endl;
            }
            break;
        case 4:
            multiply(x, y, result);
            cout << "Result: " << *result << endl;
            break;
        default:
            cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }

    delete x;
    delete y;
    delete result;
    delete choice;

    system("pause");
    return 0;
}