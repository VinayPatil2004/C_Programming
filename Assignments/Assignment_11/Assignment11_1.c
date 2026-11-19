//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: RangeDisplay
//      Input :        Integer
//      Output:        Integer
//      Description:    Display all numbers between the given range
//      Date :         1/11/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void  RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0;
   
    for(iCnt = iStart; iStart<=iEnd; iCnt++)
    {
        printf("%d \t",iCnt);
    }

}
int main()
{
    int iValue1 = 0 , iValue2 = 2;

    printf("Enter starting value \n");
    scanf("%d",&iValue1);

    printf("Enter ending value \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}