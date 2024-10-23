//write include statements
#include "decisions.h"

int main() 
{
	//initialize variables
	int menuSelection = 0;
	bool exitFlag = false;
	int grade;
	//initialize do-while loop
	do
	{
		//Display menu and retrieve user input
		cout<<"Menu\n1. Get letter grade using if\n2. Get letter grade using switch\n3. Exit\n";
		cin>>menuSelection;
		//initilize if-else-if statement
		if(menuSelection == 1)
		{
			cout<<"Get letter grade using if selected...\nPlease enter the grade: ";
			cin>>grade;
			cout<<"The letter grade is: "<<get_letter_grade_using_if(grade)<<"\n\n";
		}
		else if(menuSelection == 2)
		{
			cout<<"Get letter grade using switch selected...\nPlease enter the grade: ";
			cin>>grade;
			cout<<"The letter grade is: "<<get_letter_grade_using_switch(grade)<<"\n\n";
		}
		else if(menuSelection == 3)
		{
			cout<<"Exiting Program...\n";
			exitFlag = true;
		}
		else
		{
			cout<<"Invalid selection. Please enter a value from 1 - 3 to make a selection.\n\n";
		}

	} while(exitFlag != true);
	
	return 0;
}