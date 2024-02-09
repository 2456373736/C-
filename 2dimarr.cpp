#include <iostream>
using namespace std;
// int main ()
// {
// 	 int i ,j , mat1[2][2], mat2[2][2], mat3[2][2];
// 	 cout <<"Enter matrix mat1: ";
// 	 for (i=0; i <2;i++)
// 	 for (j=0; j<2; j++)
// 	 cin>>mat1[i][j];
// 	 cout << "Enter matrix mat2: ";
// 	 for (i=0; i<2;i++)
// 	 for (j=0;j<2;j++)
// 	 cin>>mat2[i][j];
// 	 for (i=0;i<2;i++)
// 	 for (j=0;j<2;j++)
// 	 mat3[i][j]= mat1[i][j]+mat2[i][j];
// 	 cout << "The resultant matrix is : "<<endl;
// 	 for (i=0;i<2;i++)
// 	 {
// 	 	for (j=0;j<2;j++)
// 	 	cout<<mat3[i][j]<<" ";
// 	 	cout<<endl;
//   }
// }

#define ROW1 3
#define COL1 4
#define ROW2 4
#define COL2 2 
int main ()
{
	int mat1 [ROW1][COL1],
	mat2[ROW2][COL2],
	mat3[ROW1][COL2];
	int i , j , k ;
	cout << "Enter matrix mat1: ";
	for (i=0;i<ROW1;i++)
	for (j=0;j<COL2;j++)
	cin>>mat1[i][j];
	cout<<"Enter matrix mat2: ";
	for (i=0;i<ROW2;i++)
	for (j=0;j<COL2;j++)
	cin>>mat2[i][j];
	cout << "Enter matrix mat3: ";
	for (i=0;i<ROW1;i++)
	for (j=0;j<COL2;j++)
	{
		mat3[i][j]=0;
		for (k=0;k<COL1;k++)
		mat3[i][j]+=mat1[i][k]*mat2[k][j];
		
	}
	cout <<"The Resultant matrix mat3 is: "<<endl;
	for (i=0;i<ROW1;i++)
	
	{
		for (j=0;j<COL2;j++)
		cout<<mat3[i][j];
		cout<<endl;
	}
}
