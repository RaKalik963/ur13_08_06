#include <iostream>
#include <ctime>

using namespace std;



int main()
{
	int x, y;
	int* px = new int, * py = new int;
	cout << "enter first num ";
	cin >> x;
	cout << "enter second num ";
	cin >> y;

	*px = x;
	*py = y;
	if (px > py)
	{
		cout << " first number is bigger" << endl;
	}
	else if (px < py)
	{
		cout << "second number is bigger" << endl;
	}
	else
	{
		cout << "your numbers are equal" << endl;
	}
	delete px;
	delete py;

	return 0;
	system("pause");
}