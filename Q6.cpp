#include<iostream>
using namespace std;
void swap(int &, int &);
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int x,y;
    cout<<"Enter two no: ";
    cin>>x>>y;
    swap(x,y);
    cout<<"The swapped no. are : "<<x<<" "<<y;
    return 0;
}


