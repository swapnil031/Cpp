#include<iostream>
#include<cmath>
using namespace std;
double srt(int x)
{
    return sqrt(x);
}
int main()
{
    int a;
    cout<<"enter any no\n";
    cin>>a;
   double b= srt(a);
   cout<<"the square root of "<<a<<" is "<<b<<endl;
}