#include<iostream>
using namespace std;
float area(float n)
{
    float area;
    area=3.14*n*n;
    return area;
}
int main()
{
    float a,r;
    cout<<"Enter the radius of circle:"<<endl;
    cin>>r;
    a=area(r);
    cout<<"Area of circle is: "<<a;
    return 0;
}