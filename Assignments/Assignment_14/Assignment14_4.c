//      Function Name: NonFact
//      Input :        Integer
//      Output:        Integer
//      Description:   Given number from user and Display
//                      summation of all non factors 
//      Date :         03/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <=iNo ; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}