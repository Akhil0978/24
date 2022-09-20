#include<iostream>
using namespace std;
float area (int r)
{
    return 3.14*r*r;
}
int area(int x , int y)
{
    return x*y;
}
float area (float b, float h)
{
    return (0.5*b*h);
}
int main()
{
    int x,y,r;
    float b,h;
    cout<<"Enter length and breadth of rectangle : ";
    cin>>x>>y;
    cout<<"Enter radius of  circle : ";
    cin>>r;
    cout<<"Enter base and heigth of trinagle : ";
    cin>>b>>h;
    cout<<"Area of rectangle : "<<area(x,y)<<endl;
    cout<<"Area of circle : "<<area(r)<<endl;
    cout<<"Area of triangle : "<<area(b,h)<<endl;
    return 0;
}