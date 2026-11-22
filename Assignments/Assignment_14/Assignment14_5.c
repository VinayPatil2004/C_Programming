//      Function Name: NonFact
//      Input :        Integer
//      Output:        Integer
//      Description:   Given number from user and Display
//                      difference between summation of all factors and non factors 
//      Date :         03/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFSum = 0;
    int iNFSum = 0;
    int iDiff = 0;

    for(iCnt =1 ;iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
             iFSum = iFSum + iCnt;
        }
        else
        {
            iNFSum = iNFSum + iCnt;
        }
        iDiff = iFSum - iNFSum;
    }
    return iDiff;
    
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;

}