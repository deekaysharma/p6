#include <iostream>

using namespace std;

class demo
{
    protected:
    int x;
    public:
    void getdata()
    {
        cout<<"enter the value of x =";
        cin>>x;
    }
    void displaydata()
    {
        cout<<"x = "<<x<<endl;
    }
};
class demo1
{
    protected:
    int y;
    public:
    void recievedata()
    {
        cout<<"enter the value of y =";
        cin>>y;
    }
    void putdata()
    {
        cout<<"y ="<<y<<endl;
    }
};
class demo2:public demo1,public demo
{
    private:
    int z;
    public:
    void adddata()
    {
        z=x+y;
    }
    void showdata()
    {
        cout<<"value of z ="<<z<<endl;
    }
};
int main()
{
    demo2 d;
d.getdata();
d.displaydata();
d.recievedata();
d.putdata();
d.adddata();
d.showdata();
return 0;
}
