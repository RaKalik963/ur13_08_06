#include <iostream>
#include <ctime>

using namespace std;



int main()
{
	int x, y;
	int* px = &x, * py = &y;
	cout << "enter first num ";
	cin >> x;
	cout << "enter second num ";
	cin >> y;

	*px = x;
	*py = y;
	if (px > py)
	{
		cout << " first num is bigger" << endl;
	}
	else if (px == py)
	{
		cout << "your numbers are equal" << endl;
	}
	else
	{
		cout << "second num is bigger" << endl;
	}
	delete px;
	delete py;

	return 0;
	system("pause");
}