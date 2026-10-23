//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckLeapYear
//      Input :        integer
//      Output:        integer
//      Description:  = Check Leap Year
//                       Accept a year and determine whether it is a leap year according to Gregorian calendar rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than or equal to zero invalid.
//      Output:
//                  Input: 2024 Leap Year
//                  Input: 1900 Not a Leap Year
//                  Input: 2000 Leap Year
//      Date :         21/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 4)==0)
    {
        printf("This is a Leap Year");
    }
    else
    {
         printf("This is not a Leap Year");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter Year :\n");
    scanf("%d",&iYear);
      
    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}