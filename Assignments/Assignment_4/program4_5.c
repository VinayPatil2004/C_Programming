//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckDivisibilty
//      Input :        void
//      Output:        bool
//      Description:  = Check Divisibility by 5
//                       Accept the age of a person and determine whether the person is eligit person must be at least 18 years old to vote. A negative age should be considered invalid.
//
//      Expected Output:
//                          Input: 21 Eligible for Voting
//                          Input: 16 Not Eligible for Voting
//                           Input:-5 Invalid Age
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>   
#include<stdlib.h>

void CheckDivisibilty(int iValue)
{
    if((iValue % 5)==0)
    {
        printf("The Number is Divisibil by 5 \n");
    }
    else
    {
        printf("The Number is not Divisible by 5 \n");
    }

}
int main()
{
    int IValue = 0;

    printf("Enter  number: \n");
    scanf("%d",&IValue);

    CheckDivisibilty(IValue);

    return EXIT_SUCCESS;
}