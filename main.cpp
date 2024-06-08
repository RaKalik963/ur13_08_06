#include <iostream>
#include <ctime>

using namespace std;



int main()
{
	int x;
	int* px = new int;
	cout << "enter first num ";
	cin >> x;

	*px = x;
	if (*px > 0)
	{
		cout << " your num is positive" << endl;
	}
	else if (*px < 0)
	{
		cout << "your number is negative" << endl;
	}
	else
	{
		cout << "your number are not positive or negative" << endl;
	}
	delete px;
}