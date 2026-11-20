//      Function Name:  CountTwo
//      Input :        Integer,
//      Output:        Integer
//      Description:  Givin number from user and Didplay digit or count frequency 2 in the digit
//      Date :         02/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int  iCnt = 0;
    int  iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;

    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}