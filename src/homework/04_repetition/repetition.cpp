//add include statements
#include "repetition.h"
//add function(s) code here

//Factorial Function
int factorial(int num)
{   
    //Declare additional variables
    int sum = 1;
    int count = 1;

    //Begin do-while loop
    do 
    {
        sum *= count;
        count++;
    }
    while(count <= num);
    
    //return sum
    return sum;
}

//gcd Function
int gcd(int num1, int num2)
{
    //Declare additional variables
    int greatestCommonDivisor;

    //Begin do-while loop
    do
    {
        if(num1 < num2)
        {
            greatestCommonDivisor = num1;
            num1 = num2;
            num2 = greatestCommonDivisor;
            greatestCommonDivisor = num1 - num2;
        }
        else if (num1 > num2)
        {
            greatestCommonDivisor = num1 - num2;
        }
        else
        {
            greatestCommonDivisor = num1;
        }
    } while (num1 != num2);

    return greatestCommonDivisor;
}