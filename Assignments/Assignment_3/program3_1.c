//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: PrintEven
//      Input :       Integer
//      Output:        Integer
//      Description:  Write a program which accept one number from user and print that number of even numbers on screen
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("%d\n",2*iCnt);
    }
}
int main()
{
    int iValue =0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return EXIT_SUCCESS;
}