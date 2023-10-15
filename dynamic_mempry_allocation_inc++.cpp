#include<iostream>
using namespace std;
int main(){
    int a;
    int *p;
    p=new int;
    *p=10;
    cout<<*p;
    delete p;
    p=new int[20];
    *(p+1)=20;
    cout<<*(p+1);
    delete []p;
}