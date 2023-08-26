#include<iostream>
using namespace std;
class book
{
    public:
            string name;
            string authorname;
            int pages;
            book(string aname)
            {
                authorname=aname;
                //cout<<title<<endl;
            }
            book()
            {
               /* name="";
                authorname="";
                pages=0;*/
            }
            book(book &a)
            {
                name=a.name;
                authorname=a.authorname;
                pages=a.pages;
            }
            ~book(){
                cout<<"the destructor is called"<<endl;
            }
};
int main()
{
    book *book4=new book();
    book4->name="byomkesh";
    book4->authorname="Sharadindu Bandhapadhyay";
    book4->pages=1000;
    cout<<book4->authorname<<endl;
    delete book4;
    book book1("good book");
    cout<<book1.authorname<<endl;
    book1.name="harry potter";
    cout<<book1.name<<endl;
    cout<<"enter the author name: ";
    //getline(cin,book1.authorname);
    //book1.authorname
    cout<<book1.authorname<<endl;
    book1.pages=600;
    cout<<book1.pages<<endl;
    book book3=book1;
    cout<<book3.pages<<endl;
    
    return 0;
}