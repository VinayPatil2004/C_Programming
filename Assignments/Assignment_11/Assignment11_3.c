//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: RangeSum
//      Input :        Integer
//      Output:        Integer
//      Description:  Addition all numbers between the given range
//      Date :         1/11/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart,int iEnd)
{
    int iSum = 0;
    int iCnt = 0;
    if(iStart <=0 || iEnd <=0 || iStart > iEnd)
    {
        printf("Invalid range \n");
        return -1;
    }
    for(iCnt = iStart; iCnt<=iEnd;iCnt++)
    {
       iSum = iSum + iCnt;
    }
      return iSum;
}
int main()
{
    int iValue1 = 0,ivalue2 = 0;
    int iRet = 0;

    printf("Enter starting point \n");
    scanf("%d",&iValue1);

    printf("Enter ending point \n");
    scanf("%d",&ivalue2);

    iRet = RangeSum(iValue1,ivalue2);

    if(iRet != -1)
    {
        printf("Addition is : %d\n",iRet);
    }
    return EXIT_SUCCESS;

}