//      Function Name:  ChkZero
//      Input :        Integer,
//      Output:        Integer
//      Description:  Givin number from user and Didplay digit Check contain 0 in it or not
//      Date :         02/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }        
    while (iNo != 0) 
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return TRUE;
        }
        
        iNo = iNo / 10;    
    } 
    return FALSE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("it Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

}