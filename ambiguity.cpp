#include <iostream>
using namespace std;
class B1
{
	public:
		void show_data()
		{
			cout<<"\n In the base class 1 ";
		}
};
class B2{
	public:
		void show_data()
		{
			cout<<"\n in the class class 2:";
		}
};
class D :public B1 , public B2
{
	public:
		void display()
		{
			B1::show_data();
			B2::show_data();
					}
};
int main ()
{
	D objk;
	objk.B1::show_data();
	objk.B2::show_data();
	objk.display();
}
