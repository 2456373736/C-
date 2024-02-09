//wap to perform arithmetic operations dynamically using c with classes
#include <iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout <<" Enter your choice of operation (1. add , 2. subtract , 3. multiply , 4. divide ): "<<endl;
	cin >>a;
	switch (a)
	{
	
		case 1 :
			cin >> b ;
			cin >> c;
			cout <<"The addition: "<< b+c<<endl;
			
		case 2:
			cin >> b ;
			cin >> c;
			cout <<"The subtraction: "<< b-c<<endl;
			
		case 3 :
			cin >> b ;
			cin >> c;
			cout <<"The multiplication: "<< b*c<<endl;
		case 4 :
			cin >> b ;
			cin >> c;
			cout <<"The divison: "<< b/c<<endl;
}
			
}
