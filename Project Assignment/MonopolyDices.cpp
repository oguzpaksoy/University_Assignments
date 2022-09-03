#include <cstdlib> 
#include <ctime>
#include <iostream> 
using namespace std; 

int main()
{
	srand(time(0));  ///random 
    

    while (true)
    {
        int x = 1+rand()%6; /// for the first dice=>random number between one and six
        int y = 1+rand()%6; ///for second dice=>random number between one and six
        if (x !=y){ ///If the value of the 1st dice and the 2nd dice are not the same, I want it to add up.
        	cout<<"Let's roll te dices!"<<endl;
        	cout<<"Dice1:"<<x<<"\nDice2:"<<y<<endl;
        	cout<<"Dice1+Dice2="<<x+y<<endl;
        	break;} ///döngüyü sonlandırma 
        else if (x==y){ ///if the value of the first dice and the second dice are the same I start a second loop in else if
        	cout<<"Let's roll te dices!"<<endl;
        	cout<<"Dice1:"<<x<<"\nDice2:"<<y<<"\nThe same number came from both dice.You have to roll again."<<endl;
        	cout<<"Rolling again..."<<endl;
        	int z = 1+rand()%6; 
			int k = 1+rand()%6; 
			if(z!=k){
				cout<<"Dice3:"<<z<<"\nDice4:"<<k<<endl;
				cout<<"Dice3+Dice4="<<z+k<<endl;
				break;}
			else if ( z==k ){
				cout<<"Dice3:"<<z<<"\nDice4:"<<k<<endl;
				cout<<"Same number rolled on both dice for the 2nd time..."<<endl;
				cout<<"Go to jail!";
				break;
			} break;
			
        	
		
		
    }
    return 0;
}}
