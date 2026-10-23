//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: Accept
//      Input :        no input
//      Output:        Integer
//      Description: Accept one number and print that number of * on screen
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Accept( int iNo )
{
    int iCnt = 0;

    for (iCnt = 1;  iCnt <=iNo; iCnt++)
    {
        printf("* \n");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}
