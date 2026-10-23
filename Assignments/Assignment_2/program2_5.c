//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: ChkEven
//      Input :       Integer
//      Output:        BOOL
//      Description:  Accept two numbers from user and display first number in second number of times.
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }   
    else
    {
       return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    if(bRet == true)
    {
        printf("The Number is Even \n");
    }
    else
    {
        printf("The Number is Odd \n");
    }
    return EXIT_SUCCESS;
}