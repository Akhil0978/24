#include<iostream>
using namespace std;
int highestdigtit(int);
int highestdigtit(int n)
{
    int max=-1;
    while(n)
    {
        if(max<n%10)
            max=n%10;
        n=n/10;
    }
    return max;
}
int main()
{
    int x;
    cout<<"Enter a no. :";
    cin>>x;
    cout<<"Highest digit is : "<<highestdigtit(x);
    return 0;
}

