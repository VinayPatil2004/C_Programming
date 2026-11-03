/* 
     Function Name: DollarToINR
     Input :        Integer
     Output:        Interger
      Description:  Accept amount  from user in us doller and return the indian currency 
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/   
#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int Rupees = 0;

    Rupees = iNo * 70;
    
    return Rupees;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n",iRet);

    return EXIT_SUCCESS;
}