#include<iostream>
using namespace std;
int power(int x,int y)
{
    int p=1;
    for(int i=1;i<=y;i++)
    {
        p=p*x;
    }
    return p;
}
int main()
{
    int a,b;
    cout<<"enter the base: ";
    cin>>a;
    cout<<"enter the power: ";
    cin>>b;
    int c=power(a,b);
    cout<<"the answer is "<<c<<endl;
    return 0;
}