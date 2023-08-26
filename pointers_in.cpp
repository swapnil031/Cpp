#include<iostream>
using namespace std;
int main()
{
    int age=19;
    int *a=&age;
    double gpa=2.7;
    double *b=&gpa;
    string name="Arko";
    string *c=&name;
    /*cout<<&age<<endl;
    cout<<&gpa<<endl;
    cout<<&name<<endl;*/
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*c<<endl;
}