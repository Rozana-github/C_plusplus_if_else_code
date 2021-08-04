#include <iostream>
using namespace std;

int main()
{
	int a, b;
	a = 10;
	b = 20;

	a = a + b; // a = 30
	b = a - b; // b = 30 - 20 = 10
	a = a - b; // a = 30 - 10 = 20

	cout << "a= " << a << endl;
	cout << "b = " << b << endl;
	system("pause>0");
}