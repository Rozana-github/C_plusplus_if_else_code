#include <iostream>
using namespace std;

int main()
{

	int a, b, c;
	cout << "enter the value of a , b c :";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "equilateral triangle";
	else if (a != b && a != c && a != c)
		cout << "scalene triangle";
	else
		cout << "isoscales triangle";
	system("cls");
	system("pause>0");
}