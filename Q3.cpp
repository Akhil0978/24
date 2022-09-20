#include<iostream>
using namespace std;
int power(int);
int power(int x,int y)
{
    int a=1;
    while(y--)
    {
        a=a*x;
    }
    return a;
}
int main()
{
    int x,y;
    cout<<"Enter a no. :";
    cin>>x;
    cout<<"Enter a no. :";
    cin>>y;
    cout<<"Power "<<y<<" is "<<power(x,y);
    return 0;
}
