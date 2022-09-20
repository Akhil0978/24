#include<iostream>
using namespace std;
int fact(int);
int comb(int ,int);
int fact(int x)
{
    if(x<=0)
       return 1;
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int x,i,j;
    cout<<"Enter a no. :";
    cin>>x;
    for(i=0;i<x;i++)
    {
        for(j=0;j<=i;j++)
        {
              int k=0;
              if(j==0)
                while(k++ <= (2-i+1))
                printf(" ");

                printf("%d ",comb(i,j));
        }
        cout<<"\n";
    }
    return 0;
}
int comb(int n,int r)
{
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
