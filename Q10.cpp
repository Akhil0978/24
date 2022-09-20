#include<iostream>
using namespace std;
float add (float a,float b)
{
      return a+b;
}
int add(int c , int d)
{
      return c+d;
}
int main()
{
    int x,y;
    float a,b;
    cout<<"Enter two no. of integer type : ";
    cin>>x>>y;
    cout<<"Enter two no. of real type : ";
    cin>>a>>b;
    cout<<"The addition of two no. is  : "<<add(x,y)<<endl;
    cout<<"The addition of two no. is  : "<<add(a,b)<<endl;
    return 0;
}