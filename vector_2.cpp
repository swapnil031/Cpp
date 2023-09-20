#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter the element ";
    cin>>x;

    int last_index;
    for(int i=0;i<v.size();i++){
        if(v[i]==x)
            last_index=i;
    }
    cout<<"the last index of occurance of the entered element is "<<last_index+1<<endl;
}
   