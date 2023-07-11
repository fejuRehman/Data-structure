#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

    public:
    void getbin();
    void check_bin();
    void onecompliment();
    void displaybin();
   
};
void binary::getbin()
{
    cout << "enter the binary" << endl;
    cin >> s;
}
void binary::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "this is not a binary number";

            exit(0);
        }
    }
}
void binary::onecompliment()
{   void check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::displaybin()
{
    cout << "one compliment is" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
 cout<<endl;
}

int main()
{
    binary b;
    b.getbin();
    b.check_bin();
    b.displaybin();
    b.onecompliment();
    b.displaybin();
    
    return 0;
}