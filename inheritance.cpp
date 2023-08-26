#include<iostream>
using namespace std;
//class chef is called is called superclass
class chef{
    public:
            void makeChicken()
            {
                cout<<"the chef makes chicken"<<endl;
            }
            void makeSalad()
            {
                cout<<"the chef makes salad"<<endl;
            }
            void makeSpecialdish()
            {
                cout<<"The chef makes bbq ribs"<<endl;
            }
};
//using inheritance i.e. we can use the functions of cheff class in another class i.e. italianchef
//class italianchef is called subclass
class Italianchef:public chef{
    public:
        void makepasta()
        {
            cout<<"the italian chef makes pasta"<<endl;
        }
        //overwriting the functions of cheff class even though we can use that too
        void makespecialdish()
        {
            cout<<"the italian chef makes pizza\n";
        }
};
int main()
{
    chef chef1;
    //chef1.makeChicken();
    chef1.makeSpecialdish();
    Italianchef chef2;
    //chef2.makeChicken();
   // chef2.makepasta();
   chef2.makespecialdish();
    return 0;

}