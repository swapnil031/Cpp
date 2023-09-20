#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    /*v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    
    v.resize(10);
   // v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;*/

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}
