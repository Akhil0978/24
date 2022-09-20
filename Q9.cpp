#include<iostream>
using namespace std;
float max (float a,float b)
{
    if(a>b)
        return a;
      else
      return b;
}
int max(int x , int y)
{
    if(x>y)
      return x;
      else
      return y;
}
int main()
{
    int x,y;
    float a,b;
    cout<<"Enter two no. of integer type : ";
    cin>>x>>y;
    cout<<"Enter two no. of real type : ";
    cin>>a>>b;
    cout<<"The maximum of two no. is  : "<<max(x,y)<<endl;
    cout<<"The maximum of two no. is  : "<<max(a,b)<<endl;
    return 0;
}