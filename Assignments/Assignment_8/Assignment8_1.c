/* 
     Function Name: Number
     Input :        Integer
     Output:        Void
      Description:  Print whether a number is small,medium,or large based on its value
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/      

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
      if(iNo < 50)
      {
            printf("The number is Small \n");
      }
      else if( iNo >= 50 && iNo < 100)
      {
            printf("The number is Medium");
      }
      else
      {
            printf("The number is Large");
      }
}
int main()
{
      int iValue = 0;

      printf("Enter a Number \n");
      scanf("%d",&iValue);

      Number(iValue);

      return EXIT_SUCCESS;
}