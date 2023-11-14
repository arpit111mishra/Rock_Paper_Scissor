#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int PlayerChoice,ComputerChoice,PlayerScore=0,ComputerScore=0,rounds;
    string name;
    srand(time(0));
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    cout<<"Hello "<<name<<endl<<"Welcome to Rock, Paper ,Scissors game "<<endl<<"We wish you all the best "<<name<<endl;
    cout<<name<<" Please enter the number of rounds you want to play :";
    cin>>rounds;
    cout<<"Gaming is loading ....."<<endl;
    for(int round =1;round<=rounds;round++)
    {
        cout<<"\nRound"<<round<<endl;
        cout<<"Enter your choice "<<name<<endl<<"1: for Rock: "<<endl<<"2: for paper: "<<endl<<"3: for Scissors: ";
        cin>>PlayerChoice;
        if(PlayerChoice==1)
        {
            cout<<name<<" you chose"<<" Rock"<<endl;
        }
        else if(PlayerChoice==2)
        {
            cout<<name<<" you chose"<<" Paper"<<endl;
        }
        else{
            cout<<"you chose Scissors"<<endl;
        }
        ComputerChoice=rand()%3+1;
        switch(ComputerChoice)
        {
            case 1:
            cout<<"computer chose Rock."<<endl;
            break;
            case 2:
            cout<<"computer chose Paper."<<endl;
            break;
            case 3:
            cout<<"Computer chose Scissors."<<endl;
            break;
            }
            if(PlayerChoice==ComputerChoice)
            {
                cout<<"Hey "<<name<<" It's tie"<<endl;

            }else if(
                (PlayerChoice==1&&ComputerChoice==3)||(PlayerChoice==2&&ComputerChoice==1)||(PlayerChoice==3&&ComputerChoice==2))
                {
                    cout<<" You win this round "<<endl;
                    PlayerScore++;
                    }
                    else{
                        cout<<"Computer wins this round"<<endl;
                        ComputerScore++;
                    }
    }
                    cout<<"\nGame over"<<endl;
                    cout<<"your score: "<<PlayerScore<<endl;
                    cout<<"Computer's score: "<<ComputerScore<<endl;
                    if(PlayerScore>ComputerScore)
                    {
                        cout<<"Congo ,you win the game"<<endl;
                    }else if(ComputerScore>PlayerScore)
                    {
                        cout<<"computer wins the game."<<endl;
                    }
                    else{
                        cout<<" it's a tie"<<endl;
                    }
    return 0;
}