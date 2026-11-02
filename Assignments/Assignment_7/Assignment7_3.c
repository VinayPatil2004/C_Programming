/* 
     Function Name: Display
     Input :        Integer
     Output:        Integer
      Description:  Prints number from -No to +iNo
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/      

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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