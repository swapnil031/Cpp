#include<iostream>
#include<cmath>
using namespace std;
int countno(int x)
{
    int a=0;
    while(x>0)
    {
        a++;
        x=x/10;
    }
    return a;
}
int reverse(int x)
{
    int a,s=0;
    int b=countno(x);
    while(x>0)
    {
        a=x%10;
        cout<<a;
        s=s+a*pow(10,b-1);
        x=x/10;
    }
    return s;
}
int main()
{
    int a;
    cout<<"enter a no: ";
    cin>>a;
    int b=reverse(a);
}