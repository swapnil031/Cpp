#include<iostream>
using namespace std;
class complex{
    public:
            int real;
            int img;
         complex(int a,int b)   
         {
             real=a;
             img=b;
         }
         
         complex operator+(complex &c2){
             complex ans(0,0);
             ans.real=real+c2.real;
             ans.img=img+c2.img;
             return ans;   
         }
         
};
int main()
{
    complex c1(1,2);
    complex c2(1,3);
    complex c3 =c1+c2;
    cout<<c3.real<<" "<<c3.img<<endl;
}