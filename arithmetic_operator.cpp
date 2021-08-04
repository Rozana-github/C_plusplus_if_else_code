#include <iostream>
using namespace std;

int main()
{
	//+ - * / % mathemetical operator

	cout << 5 + 2 << endl;
	cout << 5 % 2 << endl; // now it will show the decimal number#
	cout << 5 % 2 << endl; // it will not show the decimal fractional number

	// ++; -- increment or decrement operator
	int count = 7;
	count++;
	cout << "after increment :" << count << endl;

	count--;
	cout << "after decrement:" << count << endl;

	// relational operator <,>, <=, >=, ==, !=

	int a = 5, b = 5;
	cout << "a=5 and b =5 so logically  :" << (a == b) << endl; // output 1
	cout << "a=5 and b =5 so logically :" << (a > b) << endl;	// output 0
	cout << "a=5 and b =5 so logically  :" << (a < b) << endl;	// output 0
	cout << "a=5 and b =5 so logically  :" << (a != b) << endl; // output 0

	//logical operator and= &&, not=!, or= ||

	int x = 5, y = 8;
	cout << "a=5 and b =8 so logically  :" << (x == 5 && y == 5) << endl;	  // output 0
	cout << "a=5 and b =5 so logically  :" << (x == 5 && y == 5 + 3) << endl; // priority of the operator: 1st arithmetic operator, relational operator and 3rd logical operator // output 1
	cout << "a=5 and b =5 so logically  :" << (x == 5 || y == 5) << endl;	  // output 1

	//Assignment operator =, +=, -=, *=, /=, %=

	int p = 5;
	p += 7;

	cout
		<< "int p = 5 then p += 7  and p =p+ 7  is same:  " << p << endl;
	system("pause> 0");
}