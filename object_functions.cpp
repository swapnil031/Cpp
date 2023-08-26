#include<iostream>
using namespace std;
class student{
    public:
            string name;
            string major;
            double gpa;
            student(string aname,string amajor,double agpa)
            {
                name=aname;
                major=amajor;
                gpa=agpa; 
            }
            /*int hashonours(){
                if(gpa>=3.5)
                    return 1;
                return 0;    
            }*/
            bool hashonors(){
                if(gpa>=3.5)
                    return true;
                return false;    
            }
};
int main()
{
    student student1("jim","buiseness",2.4);
    student student2("Pam","Art",3.6);
    cout<<student1.hashonors()<<endl;
    cout<<student2.hashonors()<<endl;
    return 0;
}