//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckEvenOdd
//      Input :        void
//      Output:        bool
//      Description:   Check Even or Odd Number
//                      Accept an integer from the user and determine whether it is even or odd. An even number is completely divisible by 2.
//     Expected Output:
//                      Input: 24 Even Number
//                      Input: 17 Odd Number
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if((iValue %2)==0)
    {
        printf("The number is Even \n");
    }
    else
    {
        printf("The number is odd \n");
    }
}
int main()
{
    int IValue=0;

    printf("Enter Number \n");
    scanf("%d",&IValue);

    CheckEvenOdd(IValue);

    return EXIT_SUCCESS;
}