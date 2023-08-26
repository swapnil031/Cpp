#include<iostream>
using namespace std;
class book
{
    public:
            string name;
            string authorname;
            int pages;
            book()
            {
                name="no title";
                authorname="no author";
                pages=0;
            }
            book(string aName,string aAuthor,int aPages)
            {
               name=aName;
               authorname=aAuthor;
               pages=aPages;
            }
};
int main()
{
    book book1("harry potter","JK Rowling",600);
    book book2("Lord of the rings","Tolkein",800);
    book book3;
    cout<<book1.name<<endl;
    cout<<book3.name<<endl;
    return 0;
}