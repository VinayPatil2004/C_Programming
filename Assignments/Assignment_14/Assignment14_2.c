//      Function Name: FactRev
//      Input :        Integer
//      Output:        Integer
//      Description:   Given number from user and Display factors 
//                      in decreasing order
//      Date :         03/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{

    int iCnt = 0;
    

    for(iCnt = iNo -1; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt)==0)
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

    FactRev(iValue);

    return EXIT_SUCCESS;

}