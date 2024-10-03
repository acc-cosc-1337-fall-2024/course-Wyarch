//Include statements
#include "func.h"
using std::cout; using std::cin;

int main() 
{
	//initialize variables
	int menuSelection = 0;
	bool exitFlag = false;
	string dnaStrand;
	//initialize do-while loop
	do
	{
		//Display menu and retrieve user input
		cout<<"Menu\n1. Get GC Content\n2. Get DNA Complement\n3. Exit\n";
		cin>>menuSelection;
		//initilize if-else-if statement
		if(menuSelection == 1)
		{
			cout<<"Get GC Content Selected...\nPlease enter the DNA strand: ";
			cin>>dnaStrand;
			cout<<"The GC Content is: "<<(get_gc_content(dnaStrand)*100)<<"%\n\n";
		}
		else if(menuSelection == 2)
		{
			cout<<"Get DNA Complement selected...\nPlease enter the DNA strand: ";
			cin>>dnaStrand;
			cout<<"The DNA Complement is: "<<dna_complement(dnaStrand)<<"\n\n";
		}
		else if(menuSelection == 3)
		{
			cout<<"Exiting Program...\n";
			menuSelection = 0;
		}
	} while(menuSelection != 0);
	
	return 0;
}
