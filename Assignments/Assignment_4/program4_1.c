//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckNumber
//      Input :        void
//      Output:        bool
//      Description:   Check Whether a Number Is Positive or Negative
//                        Write a C program that accepts an integer from the user and determines whether the entered number is positive, negative, or zero.
//       Expected Output:
//                           Input: 15 Positive Number
//                          Input:-8→ Negative Number
//                          Input: 0 Zero
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("The number is Positive \n");
    }
    else 
    {
        if(iValue < 0)
        {
            printf("The number is Negative \n");
        }
        else
        {
            printf("The Number is 0 \n");
        }
    }    

}
int main()
{
    int iValue =0;

    printf("Enter a Number: \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}