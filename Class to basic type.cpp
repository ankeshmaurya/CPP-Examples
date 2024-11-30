#include<iostream>
using namespace std;
class area
{
    double rad;
public:
    area()
    {
        rad=0.0;
    }
    void getdata()
    {
        cin>>rad;
    }
    operator double()
    {
        double ar=3.14*rad*rad;
        return ar;
    }
};
int main()
{
    double a;
    area a1;
    a1.getdata();
    a=a1;
    cout<<a;
}
