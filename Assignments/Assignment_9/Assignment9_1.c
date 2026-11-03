/* 
     Function Name: Display
     Input :        Integer
     Output:        Void
      Description:  Accept number from user and Display * and #
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/   
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}