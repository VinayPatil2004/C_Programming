//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: ChekMultipleDividibility
//      Input :        integer
//      Output:        void
//      Description:  = Check Divisibility by 3 and 5
//                      Problem Statement: Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5, or neither.
//      Output:         
//                  Input: 15 Divisible by Both
//                  Input: 9 Divisible by 3 Only
//                  Input: 10 Divisible by 5 Only
//                  Input: 7 Not Divisible by Either
//     
//      Date :         21/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void ChekMultipleDividibility(int iValue)
{
    if (((iValue % 3)==0)&&((iValue % 5)==0))
    {
        printf("The Divisible by Both");
    }
    else if((iValue % 3)==0)
    {
        printf("The divisible by 3");

    }
    else if((iValue % 5)==0)
    {
         printf("The divisible by 5");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number \n");
    scanf("%d",&iValue);

    ChekMultipleDividibility(iValue);

    return EXIT_SUCCESS;
}