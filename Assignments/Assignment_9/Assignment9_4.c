/* 
     Function Name: OddFactorial
     Input :        Integer
     Output:        Interger
      Description:  Accept number from user and odd factoiral of given number 
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/
#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iFact= 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 2 ; iCnt--)
    {
        if((iCnt % 2)!= 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue= 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("The Odd fatorial number is %d\n",iRet);

    return EXIT_SUCCESS;
}