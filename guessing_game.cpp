#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int secretnum=7;
    int guess;
    int i=1;
    cout<<"enter  guess: "<<i;
    l:cin>>guess;
    while(secretnum!=guess)
    {
        if(guess==secretnum)
        {
            break;
        }
        else{
            if(i<5)
            {cout<<"enter again chance "<<i+1<<endl;
            i++;
            goto l;
            }
            else{
                goto m;
            }
        }
    }
    cout<<"you guessed it correct\n";
    m:cout<<"chances over";
}