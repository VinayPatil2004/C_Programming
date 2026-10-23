//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: Display
//      Input :       Integer
//      Output:        none
//      Description:   Accept one Number from user and print that number of * on screen
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt<iNo)
    {
        printf("*\n");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return EXIT_SUCCESS;
}