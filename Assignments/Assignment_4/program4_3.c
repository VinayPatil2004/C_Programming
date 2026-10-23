//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: FindGreater
//      Input :        void
//      Output:        bool
//      Description:  = Find the Greater of Two Numbers
//                      Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal, display an appropriate message.
//      Expected Output:
//                          Input: 10 2020 is Greater         
//                           Input: 50 30-50 is Greater        
//                            Input: 15 15 Both Numbers Are Equal      
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("The Greater Number is %d\n",iFirst);
    }
    else if(iFirst < iSecond)
    {
          printf("The Greater Number is %d\n",iSecond);
    }
}
int main()
{
    int iValue1 =0;
    int iValue2 = 0;

    printf("Enter two number: \n");
    scanf("%d %d",&iValue1, &iValue2);

    FindGreater(iValue1 ,iValue2);
    
    return EXIT_SUCCESS;
}