//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: Chek
//      Input :       Integer
//      Output:        bool
//      Description:  Check Divisible By 5 or not
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Chek(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet= false;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    bRet = Chek(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return EXIT_SUCCESS;
}