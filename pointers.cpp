#include <iostream>
using namespace std;
int main()
{
    //POINTER --> variable which holds an address of another variable.//
    int a = 10;
    int* b= &a;
    //ADDRESS OPERATOR: (address of) a//
    cout<<"The address of a is: "<<&a <<endl;
    cout<<"The address of a by using pointer is: "<<b <<endl;
    //DEREFRENCE OPERATOR: (value of) a//
    cout<<"The value of a is: "<<a <<endl;
    cout<<"The value of a by using pointer is: "<<*b <<endl;

    //POINTER TO POINTER --> pointer variable which holds address of other pointer.//
    int** c = &b;
    cout<<"The address of b is: "<<&b <<endl;
    cout<<"The address of b using pointer to pointer is: "<<c <<endl;
    cout<<"The value at b is: "<<*b <<endl;
    cout<<"The value at b by using pointer to pointer is: "<<**c <<endl;

    //POINTER ARITHMETIC --> increment, decrement of pointers
    b++;
    cout<<"Incremented address of b is: "<<b <<endl;
}