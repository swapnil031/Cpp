#include<iostream>
using namespace std;
class movie{
    private:
           string rating; 
    public:
            string title;
            string director;
            //string rating;
            movie(string aTitle,string aDirector,string aRating){
                title=aTitle;
                director=aDirector;
                //rating=aRating;
                 setRating(aRating);
            }
            void setRating(string aRating){
                if(aRating=="G" || aRating=="PG" || aRating=="PG-13")
                    rating=aRating;
                else
                    rating="NA";
            }
            string getRating()
            {
                return rating;
            }
};
int main()
{
    movie avengers("The Avengers","joss whedon","PG-13");
    //avengers.
    cout<<avengers.title<<endl;
    cout<<avengers.director<<endl;
    //avengers.setRating("hello");
    cout<<avengers.getRating()<<endl;    
    return 0;
}