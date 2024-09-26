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
    int mod1 = num1;
    int mod2 = num2;
    int modCalc = 1;
    int greatestCommonDivisor;

    //Begin do-while loop
    while (modCalc > 0)
    {
        //GCD if remainder of 0 is true first
        if((mod1 % mod2) == 0 || (mod2 % mod1) == 0)
        {
            greatestCommonDivisor = (mod1 < mod2) ? mod1:mod2;
            modCalc = 0;
        }
        //if the first value is more than the second value
        else if (mod1 > mod2)
        {
            modCalc = mod1 % mod2;
            mod1 = mod2;
            greatestCommonDivisor = mod2;
            mod2 = modCalc;
        }
        //if the second value is more than the first value
        else if (mod1 < mod2)
        {
            modCalc = mod2 % mod1;
            mod1 = mod2;
            greatestCommonDivisor = mod2;
            mod2 = modCalc;
        }
        
    }

    //return gcd
    return greatestCommonDivisor;
}