//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: RangeDisplayEven
//      Input :        Integer
//      Output:        Integer
//      Description:  Display all even numbers between the given range
//      Date :         1/11/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    for(iStart = iStart;iStart<=iEnd;iStart++)
    {
        if((iStart % 2)==0)
        {
             printf("%d \t",iStart);
        }     
    }
}
int main()
{
    int iValue1 = 0,ivalue2 = 0;

    printf("Enter starting point \n");
    scanf("%d",&iValue1);

    printf("Enter ending point \n");
    scanf("%d",&ivalue2);

    RangeDisplayEven(iValue1,ivalue2);

    return EXIT_SUCCESS;

}