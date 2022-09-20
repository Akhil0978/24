#include<iostream>
using namespace std;
int fibo(int);
int fibo(int n)
{
    int f1=1,f2=1,temp;
    if(n<=2)
    {
        return 1;
    }
    for(int i=3;i<=n;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }
    return temp;
}
int main()
{
    int n,flag=0;
    cout<<"Enter a no.";
    cin>>n;
    for(int i=1; ;i++)
    {
        int value =fibo(i);
        printf("%d ",value);
        if(n==value)
        {
            flag=1;
            break;
        }
        if(value>n)
            break;
    }
    printf("\n");
    if(flag==1)
        cout<<"Number is in Fibonacci";
    else
        cout<<"Number is not in Fibonacci";
    return 0;
}


