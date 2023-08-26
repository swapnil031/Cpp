#include<iostream>
#include<cmath>
using namespace std;
int getmax(int a,int b)
{
    int result;
    if(a>b)
    {
        result=a;
    }
    else{
        result = b;
    }
    return result;
}
int main()
{
    int a,b;
    cout<<"enter two numbers\t";
    cin>>a>>b;
    int x=getmax(a,b);
    cout<<"the larger of the two numbers is "<<x<<endl;
    return 0;
}