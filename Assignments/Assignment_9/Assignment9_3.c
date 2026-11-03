/* 
     Function Name: EvenFactorial
     Input :        Integer
     Output:        Interger
      Description:  Accept number from user and even factoiral of given number 
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/
#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 2;iCnt--)
    {
         if((iCnt % 2)==0)
        {
            iFact = iFact * iCnt;
             
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}