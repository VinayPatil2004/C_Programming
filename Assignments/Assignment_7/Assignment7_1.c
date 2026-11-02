/* 
     Function Name: Pattern
     Input :        Integer
     Output:        Print a pattern of $ and * separated 
      Description:  Prints $ and * iNo times on the console
      Date :         30/10/2026
      Autuor:        Vinay Sunil Patil
*/      

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" $\t *\t ");
    }
    printf("\n");
    
}
int main()
{
    int iValue = 0;

    printf("Enter A number \n");
    scanf("%d",&iValue);
 
    Pattern(iValue);

    return EXIT_SUCCESS;
}