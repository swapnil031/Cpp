#include<iostream>
using namespace std;
class sum{
    public:
            void add(int a,int b)
            {
                cout<<a+b<<endl;
            }
            void add(int a,int b,int c)
            {
                cout<<a+b+c<<endl;
            }
            void add(float a,float b)
            {
                cout<<a+b<<endl;
            }
};
int main()
{
    sum *s=new sum();
    s->add (float(1.2),float(2.2));
    s->add(2,3);

}