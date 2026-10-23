//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: Chek
//      Input :       Integer
//      Output:        none
//      Description:  Accept one Number from user and print that number of * on screen
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*\n");
        iNo--;
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