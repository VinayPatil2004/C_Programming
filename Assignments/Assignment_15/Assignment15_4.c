//      Function Name: Multiply
//      Input :        Integer
//      Output:        Integer
//      Description:  Accept three number from user and prints
//                  multiplication
//      Date :         04/11/2026
//      Autuor:        Vinay Sunil Patil

#include<stdio.h>
#include<stdlib.h>

int  Multiply(int iNo1,int iNo2,int iNo3)
{
    
    int Ans = 1;

   if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
   {
     return 0;
   }
     if(iNo1 != 0)
    {
        Ans = Ans * iNo1;
    }
    if(iNo2 != 0)
    {
        Ans = Ans * iNo2;
    }
    if(iNo3 != 0)
    {
        Ans = Ans * iNo3;
    }

    return Ans;
}
int main()
{
    int iValue1 = 0,iValue2 =0,iValue3 =0;
    int iRet = 0;

    printf("Enter Three Number \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of three number %d\n",iRet);

    return EXIT_SUCCESS;

}