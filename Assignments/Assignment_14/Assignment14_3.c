//      Function Name: NonFact
//      Input :        Integer
//      Output:        Integer
//      Description:   Given number from user and Display
//                      non factors 
//      Date :         03/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d \t",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}