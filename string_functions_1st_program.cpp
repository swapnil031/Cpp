#include<iostream>
using namespace std;
int main()
{
    string phrase="good morning";
    cout<<phrase<<endl;
    cout<<phrase.length()<<endl;
    cout<<phrase.find("morning",0)<<endl;
    cout<<phrase.substr(5,3)<<endl;
    phrase[0]='b';
    cout<<phrase<<endl;
    //getline(cin,phrase);
    cout<<phrase<<endl;
    string name=" arko";
    string output=phrase+name;
    cout<<output<<endl;
}