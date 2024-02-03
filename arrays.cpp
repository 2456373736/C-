#include <iostream>
using namespace std;
class Shop{
    int Item_Id[100];
    int Item_Price[100];
    int counter;
    public:
    void initCounter() { counter =0;}
    void getprice();
    void display();
};
void Shop :: getprice(void)
    {
        cout<<"Enter Id of your item number "<<counter+1<<": "<<endl;
        cin>>Item_Id[counter];
        cout<<"Enter price of your Item number "<<counter<<": "<<endl;
        cin>>Item_Price[counter];
        counter++;
    }
void Shop :: display(void)
    {
        for(int i=0;i<counter;i++)
        {
            cout<<"Item ID: "<<Item_Id[i]<<" and Item Price: "<<Item_Price[i]<<endl;
        }
    }

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.getprice();
    dukaan.getprice();
    dukaan.getprice();
    dukaan.display();
    return 0;


}