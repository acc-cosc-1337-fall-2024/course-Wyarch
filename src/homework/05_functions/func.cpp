//add include statements
#include <iostream>
#include "func.h"

using std::string; using std::cout; using std::cin;
//add function code here
double get_gc_content(const string& dna)
{
    //Initialize Local Variables
    double gcContent;
    double targetCharCount = 0;
    double charCount;
    
    //Initialize For Loop for string processing
    for(auto i = 0; i < dna.size(); i++)
    {
        //Check G in String
        if(dna[i] == 71 || dna[i] == 103)
        {
            charCount++;
            targetCharCount++;
        }
        //Check C in String
        else if(dna[i] == 99 || dna[i] == 67)
        {
            charCount++;
            targetCharCount++;
        }
        //All checks are false, increase counter
        else
        {
            charCount++;
        }
    }

    gcContent = (targetCharCount/charCount);

    return gcContent;
}

string get_reverse_string(string dna)
{
    //Declare Local Variables
    int dnaLength = dna.size();
    string revString;

    //Initialize for loop
    for(auto i = dna.size(); i > 0; i--)
    {
        revString += dna[i-1];
    }
    //return reversed string
    return revString;
}