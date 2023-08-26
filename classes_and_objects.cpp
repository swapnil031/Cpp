#include<iostream>
using namespace std;
class book
{
    public:
            string name;
            string authorname;
            int pages;
};
int main()
{
    book book1;
    book1.name="harry potter";
    cout<<book1.name<<endl;
    cout<<"enter the author name: ";
    getline(cin,book1.authorname);
    //book1.authorname
    cout<<book1.authorname<<endl;
    book1.pages=600;
    cout<<book1.pages<<endl;
    book *book2=new book();//new way of declaring a object
    book2->authorname="satyajit ray";
    book2->name="feluda";
    cout<<book2->authorname<<endl;
    cout<<book2->name<<endl;
    return 0;
}