//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: DisplayEvenFactor
//      Input :       Integer
//      Output:       Integer
//      Description:  Write a program which accept number from user and print even factors of that number
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFactor(int iNo)
{
    int i=0;
    printf("Factors of %d are \n",iNo);
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i=1; i<= iNo; i++)
    {

        if(((iNo % i)==0)&&((i % 2)==0))
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}