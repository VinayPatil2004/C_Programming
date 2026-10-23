//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: Display
//      Input :       Integer
//      Output:        void
//      Description:  Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 10;
    if(iNo < iCnt)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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