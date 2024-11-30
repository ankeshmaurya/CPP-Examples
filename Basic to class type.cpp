#include<iostream>
using namespace std;
class Distance
{
private:
    int km,m;
public:
    Distance()
    {
        km=m=0;
    }
    Distance(int d)
    {
        km=d/1000;
        m=d%1000;
    }
    void show()
    {
        cout<<km<<" Kilometres "<<m<<" metres";
    }
};
int main()
{
    int d1;
    cin>>d1;
    Distance d;
    d=d1;
    d.show();
}
