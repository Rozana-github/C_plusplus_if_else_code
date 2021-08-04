//1st user who is the host user she has to enter a number
//who have to delete that number from our console
// so that the second user can not see it .
//2nd used which is called guest user ,who has to enter his guess. so that he has to guess the number,
//what number has to entered by the 1st user.

#include <iostream>
using namespace std;

int main()
{
	int host_usernum, guest_usernum;
	cout << "host number :" << endl;
	cin >> host_usernum;

	// to delete the number so that second user is not able to see the number we use cls

	system("cls");

	cout << "guest:";
	cin >> guest_usernum;

	(host_usernum == guest_usernum) ? cout << "correct!" : cout << "not correct!";
	system("pause>0");
}