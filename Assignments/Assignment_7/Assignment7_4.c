/* 
     Function Name: OddDisplay
     Input :        Integer
     Output:        Integer
      Description:  Display all odd number from 1 to iNo
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/      
#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            printf("%d \t",iCnt);
        }    
        
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter A number \n");
    scanf("%d",&iValue);
 
    OddDisplay(iValue);

    return EXIT_SUCCESS;
}