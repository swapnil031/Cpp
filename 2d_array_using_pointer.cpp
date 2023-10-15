#include<iostream>
using namespace std;
int main(){
    int a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(i==0)
                a[i][j]=j;
            else
                a[i][j]=j+3;
        }
    }
    int (*p)[3]=a; // one dimensional array of three integers
    cout<<a<<endl; // &a[0] or &a[0][0]
    cout<<*a<<endl; // a[0] or &a[0][0] 
    cout<<*(a+1)<<endl; // a[1] or &a[1][0] 
    cout<<a+1<<endl; // a[1] or &a[1][0]
    cout<<*(a+1)+2<<endl; // a[1]+2 or &a[1][2]
    cout<<*(*a+1)<<endl;// *(a+1)
    /* now we will see few things,which are as follows
        1) a[i][j]=*(a[i]+j)
        2) a[i][j]=*(*(a+i)+j)
    */
}