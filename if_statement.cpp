#include<iostream>
using namespace std;
int main()
{
    bool ismale=true;
    bool istall=false;
    /*if(ismale && istall)
    {
        cout<<"you are a tall male";
    }
    else{
        cout<<"you are not a tall male";
    }*/
    if(ismale && istall)
    {
        cout<<"you are a tall male";
    }
    else if(ismale && !istall)
    {
        cout<<"you are a short male";
    }
    else{
        cout<<"you are not a tall male";
    }
}