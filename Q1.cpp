#include<iostream>
using namespace std;
int prime(int);
int prime(int n)
{
    int flag =0;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
            flag=1;
    }
    return flag;
}
int main()
{
    int x;
    cout<<"Enter a no. :";
    cin>>x;
    if(prime(x)==0)
        cout<<"Prime";
    else
        cout<<"Not Prime";
    return 0;
}
