//write include statements
#include <iostream>
#include "hwexpressions.h"


//write namespace using statement for cout
using std::cout; using std::cin;

int main()
{
	//Variable Declaration
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	//Begin Processing
	cout<<"Enter the meal total in dollars: ";
	cin>>meal_amount;
	cout<<"\n Enter the tip rate in percentage (%): ";
	cin>>tip_rate;
	
	tax_amount = get_sales_tax_amount(meal_amount);
	tip_amount = get_tip_amount(meal_amount,tip_rate);

	//Add all values into total
	total = tax_amount + tip_amount + meal_amount;

	//Display receipt
	cout<<"Meal Amount: " <<meal_amount <<"\n";
	cout<<"Sales Tax:   " <<tax_amount <<"\n";
	cout<<"Tip Amount:  " << tip_amount <<"\n";
	cout<<"Total:       " <<total <<"\n";


	return 0;
}
