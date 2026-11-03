/* 
     Function Name: SquareMeter
     Input :        Integer
     Output:       double
      Description:  Accept Area in square feet from user and convert into square meter
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/ 
#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int ivalue)
{
   double SM = 0.0;

   SM = ivalue * 0.0929;

   return SM;

}
int main()
{
    int iValue = 0 ;
    double dRet = 0.0;

    printf("Enter Area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Area of Square Meter is: %f\n",dRet);

    return EXIT_SUCCESS;

}