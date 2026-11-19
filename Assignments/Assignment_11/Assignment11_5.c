//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: RangeDisplayRev
//      Input :        Integer
//      Output:        Integer
//      Description:    Display all numbers Reveseform between the given range
//      Date :         1/11/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void  RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt = 0;
    if(iStart <=0 || iEnd <=0 || iStart > iEnd)
    {
        printf("Invalid range \n");
       
    }
    for(iCnt = iEnd; iCnt>=iStart; iCnt--)
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

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}