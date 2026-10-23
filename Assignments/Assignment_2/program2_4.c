//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: Dispaly
//      Input :       Integer ,Integer
//      Output:        Integer
//      Description:  Accept two numbers from user and display first number in second number of times.
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }

}
int main()
{

    int iValue = 0;
    int iCount = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    printf("Enter freqency :\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    
    return EXIT_SUCCESS;
}