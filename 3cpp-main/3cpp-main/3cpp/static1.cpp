// static data member
#include <iostream>
using namespace std;


class item
{
    static int count;
    int number;
    public:
    void getdata(int a)
    {
        number = a;
        count++;

    }
    void getcount()
    {
        cout<<"count";
        cout<<count<<endl;
    }
    
    };
    int item::count=100;
    int main ()
    {
        item a,b,c;
        a.getcount();
        b.getcount();
        c.getcount();
        a.getdata(100);
        b.getdata(200);
        c.getdata(300);
        cout<<"After reading data"<<endl;
        a.getcount();
        b.getcount();
        c.getcount();


    }