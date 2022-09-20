#include<iostream>
using namespace std;
int add (int , int ,int);
int add(int x,int y,int z=0)
{
    return x+y+z;
}
int main()
{
    int a,b,c;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter second no: ";
    cin>>b;
    cout<<"Enter third no: ";
    cin>>c;
    cout<<"The addition two no is :  "<<add(a,b)<<endl;
    cout<<"The addition three no is :  "<<add(c,b,c)<<endl;
    return 0;
}



