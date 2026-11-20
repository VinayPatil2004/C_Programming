//      Function Name: DisplayDigit
//      Input :        Integer,
//      Output:        Integer
//      Description:  Givin number from user and Didplay digit reverse number
//      Date :         02/11/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }        
    while (iNo != 0) 
    {
        iDigit =  iNo % 10;              
        printf("%d\n",iDigit);  
        iNo = iNo / 10;    
    } 
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}