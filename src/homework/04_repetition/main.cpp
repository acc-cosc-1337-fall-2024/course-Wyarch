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
				cout<<"Exiting program...\n";
				break;
			default:
				break;
		}
	} while(userSelection != 3);
	return 0;
}
