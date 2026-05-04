#include<iostream>
#include<ctime>
using namespace std; 
int main ()
{
   int com, guess, count=0; 
   
    srand(time(0)); 

    com = rand() % 100 + 1; 


    do 
	{
		cout<<"Enter the guess between 1 to 100    "<<endl; 
		cin>>guess; 
		count++; 
		
		if (guess > com)
		{
			cout<<"To high  "<<endl; 
			
		}
		else if (guess < com)
		{
			cout<<"To low   "<<endl; 
			
		}
		else
		{
			cout<<"Congrats !!"<<endl; 
		}
	}while(guess != com); 
	cout<<"Number of attempts is    "<<count; 
}



