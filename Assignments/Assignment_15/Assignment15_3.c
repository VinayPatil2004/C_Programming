//      Function Name: ChkEqual
//      Input :        Integer
//      Output:        Integer
//      Description:   Accept two number from user and check
//                     whether number are equal or not 
//      Date :         04/11/2026
//      Autuor:        Vinay Sunil Patil

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter First Number \n");
    scanf("%d",&iValue1);

    printf("Enter senond Number \n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}