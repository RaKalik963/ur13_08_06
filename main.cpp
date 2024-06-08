#include <iostream>
#include <ctime>

using namespace std;



int main()
{
	int* px = new int, * py = new int;
	cout << "enter first num ";
	cin >> *px;
	cout << "enter second num ";
	cin >> *py;
	int* temp = new int;



	cout << *px << "<--px   py-->" << *py << endl;

	*temp = *px;
	*px = *py;
	*py = *temp;

	cout << *px << "<--px   py-->" << *py << endl;


	delete px;
	delete py;

	system("pause");
	return 0;
}