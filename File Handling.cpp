#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of("result.txt");
    of<<"hello -- how are you";
    of.close();
    cout<<"Data saved";
    }
