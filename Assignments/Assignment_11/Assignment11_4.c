//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: RangeSumEven
//      Input :        Integer
//      Output:        Integer
//      Description:  Addition all even numbers between the given range
//      Date :         1/11/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iSum = 0;
    int iCnt = 0;

    if(iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        
        return -1;
    }
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iSum = iCnt + iSum;
        }
    }
    return iSum;

}
int main()
{

    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1 , iValue2);

    if(iRet != -1)
    {
        printf("The Sum Addition %d\n",iRet);
    }
    else
    {
        printf("Invalid range \n");
    }
    return EXIT_SUCCESS;
}