//      Function Name: CountOdd
//      Input :        Integer
//      Output:        Integer
//      Description:   Givin number from user and multiplication all digits in number
//      Date :         02/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
          iMul = iMul * iDigit;
        } 
        iNo = iNo / 10;
      
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);
}