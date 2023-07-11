#include <iostream>
using namespace std;
class shop
{
    int id_no[50];
    int price[50];
    int counter = 0;

public:
    void init()
    {
        int counter = 0;
    }
    void setprice();
    void diplayprice();
};
void shop::setprice()
{
    for (int j = 0; j < 3; j++)
    {
        cout << "enter the item number" << counter + 1 << endl;
        cin >> id_no[counter];
        cout << "enter the price" << endl;
        cin >> price[counter];
        counter++;
    }
}
void shop::diplayprice()
{
    for (int i = 0; i < counter; i++)
        cout << "the price of " << id_no[i] << " is " << price[i] << endl;
}

int main()
{
    shop a;
    a.setprice();
    // a.setprice();
    // a.setprice();
    a.diplayprice();
    return 0;
}