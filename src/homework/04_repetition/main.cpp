//write include statements
#include <iostream>
#include "repetition.h"
//write using statements
using std::cout; using std::cin;


int main() 
{
	//Declare variables
	int userSelection;
	int num1;
	int num2;
	//Begin do-while loop
	do
	{
		userSelection = 3;
		cout<<"Factorial or GCD Menu:\n1. Factorial\n2. Greatest Common Divisor\n3. Exit";
		cout<<"\nPlease select an option using an integer: ";
		cin>>userSelection;
		switch(userSelection)
		{
			case 1:
				cout<<"Factorial selected...\nPlease enter an integer: ";
				cin>>num1;
				cout<<"The factorial to your number is "<<factorial(num1)<<"\n\n";
				break;
			
			case 2:
				cout<<"Greatest Common Divisor selected...\nPlease enter your first integer: ";
				cin>>num1;
				cout<<"Please enter your second integer: ";
				cin>>num2;
				cout<<"Your Greatest Common Divisor is "<<gcd(num1,num2)<<"\n\n";
				break;
			
			case 3:
				do
				{
					cout<<"Are you sure you want to exit?\n1. Yes\n2. No\nPlease select an option using an integer: ";
					cin>>userSelection;

					if(userSelection == 1)
					{
						cout<<"Exiting program...\n";
					}
					else if(userSelection == 2)
					{
						cout<<"Returning to program...\n\n";
					}
					else
					{
						cout<<"Invalid input. Please enter an integer from 1-2.\n";
					}
				} while(userSelection != 1 && userSelection != 2);
				userSelection = userSelection < 2 ? 3:1;
				break;

			default:
				cout<<"Invalid input. Please enter an integer from 1 - 3.\n";
				break;
		}
	} while(userSelection != 3);
	return 0;
}
