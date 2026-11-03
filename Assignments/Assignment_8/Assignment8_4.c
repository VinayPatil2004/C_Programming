/* 
     Function Name: Factoial
     Input :        Integer
     Output:        Interger
      Description:  Accept number from user and Display its table
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/  
#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
      int iCnt = 0;

      for(iCnt = 1; iCnt <= 10; iCnt++)
      {
            printf("%d \t",iCnt * iNo);
      }
}

int main()
{
      
      int iValue = 0;

      printf("Enter a Number \n");
      scanf("%d",&iValue);

      Table(iValue);

      return EXIT_SUCCESS;
}