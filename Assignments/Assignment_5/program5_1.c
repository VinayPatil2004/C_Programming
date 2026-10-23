//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: FindGreater
//      Input :        integer
//      Output:        integer
//      Description:  = Find the Greatest of Three Numbers
//                       Accept three integers and determine the greatest number among them. The program must also work correctly when two or all three numbers are equal.
//      Output:
//                          Input: 10 50 30 50 is Greatest
//                          Input: 40 40 20 40 is Greatest
//                          Input: 15 15 1515 is Greatest
//      Date :         21/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond , int iThird)
{
    if((iFirst > iSecond)&&(iFirst > iThird))
    {
        printf("The Greater number is %d\n",iFirst);
    }
    else if((iSecond > iFirst)&&(iSecond > iThird))
    {
         printf("The Greater number is %d\n",iSecond);
    }
    else
    {
       printf("The Greater number is %d\n",iThird); 

    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0 , iValue3 = 0;

    printf("Enter a three number : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreater(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}
