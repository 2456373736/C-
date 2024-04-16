#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter your choice: ";
	cin>>num;
	switch (num)
	{
		case 1:
			cout<<"You pressed 1";
			break;
		case 2:
			cout<<"You pressed 2";
			break;
		default:
			cout<<"Press either 1 or 2";
			break;
	}
}
