/* 
     Function Name: MultipleDisplay
     Input :        Integer
     Output:        Integer
      Description:  Display first 5 multipliction of iNo
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/      
#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++ )
    {        
        printf("%d \t",iNo * iCnt);
        
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter A number \n");
    scanf("%d",&iValue);
 
    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}