//      Function Name:  CountRange
//      Input :        Integer
//      Output:        Integer
//      Description:   Givin number from user and difference between summantion of 
//                      even number and summation og odd number
//      Date :         02/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            iEvenSum = iDigit + iEvenSum;
        }
        else
        {
            iOddSum = iDigit + iOddSum;
            
        }
        iNo = iNo / 10;
        
    }
    iDiff = iEvenSum - iOddSum;
    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}