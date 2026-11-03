/* 
     Function Name: Factoial
     Input :        Integer
     Output:        Interger
      Description:  Calculate and return the factorial of a givem number
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/  
#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
      int iCnt = 0 ,iFact = 0;

    iFact = 1;

    for(iCnt = 1 ; iCnt <=iNo; iCnt++)
    {
       iFact = iFact * iCnt;

    }
    return iFact;
   
}

int main()
{
      
      int iValue = 0 , iRet = 0;

      printf("Enter a Number \n");
      scanf("%d",&iValue);

      iRet = Factorial(iValue);
      
       printf("Factorial is :%d\n",iRet);
      return EXIT_SUCCESS;
}