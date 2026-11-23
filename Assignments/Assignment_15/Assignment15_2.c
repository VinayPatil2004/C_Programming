//      Function Name: ChkGreater
//      Input :        Integer
//      Output:        Integer
//      Description:   Accept one number from user and check
//                      number greater than 100 or not
//      Date :         04/11/2026
//      Autuor:        Vinay Sunil Patil

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define True 1
#define False 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return True;
    }
    else
    {
        return False;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = False ;

    printf("Enter a Number \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == True)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return EXIT_SUCCESS;

}