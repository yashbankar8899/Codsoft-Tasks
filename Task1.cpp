
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    
    srand(time(0));
    int numberToguess = rand()%100 + 1;
    int yourguess = 0;
    int attempts = 0;

    cout<<".....Welcome to a Number Guessing Game....."<<endl;
    cout<<"I have generated the random number from 1 to 100 ;/n"
        <<"Can you guess the number..? ";

    
    while(numberToguess!=yourguess){
        cout<<"Enter your Guess:";
        cin>>yourguess;

        

        if(yourguess>numberToguess){
            cout<<"Your Guess is greater the number generated;"
                <<"Please try again."<<endl;
            attempts++;
        }

        else if (yourguess<numberToguess){
            cout<<"Your Guess is less than the number generated;"
                <<"Please try again."<<endl;
            attempts++;
        }

        else{
            cout<<"Congratulations; Your guess is correct"<<endl;
            cout<<"You have guessed the number in "<<attempts<<" attempts";
        }

    }
    return 0;
}
