#include<iostream>
using namespace std;
class time{
    public:
    int hrs;
    int mins;
    int secs;
    
        time(int ahrs,int amins,int asecs){
            this->hrs=ahrs;
            this->mins=amins;
            this->secs=asecs;
        }
        time(){}
    time duration(time *start,time *end){
        time * d=new time();
        d->hrs=start->hrs+end->hrs;
        return *d;
        }
};
int main(){
    /*time start(11,35,33);
    time end(18,25,25);
    time timespan;
    timespan=duration(start,end);*/
    time * start=new time (11,35,33);
    time *end=new time(18,25,25);
    time *timespan=new time();
    *timespan=timespan->duration(start,end);
    cout<<timespan->hrs<<endl;
}
