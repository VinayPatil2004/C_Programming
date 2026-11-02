/* 
     Function Name: Display
     Input :        Integer
     Output:        Integer
      Description:  prints number from 1 to iNo
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/      

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }
   
    
}
int main()
{
    int iValue = 0;

    printf("Enter A number \n");
    scanf("%d",&iValue);
 
    Display(iValue);

    return EXIT_SUCCESS;
}