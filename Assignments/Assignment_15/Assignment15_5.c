//      Function Name: Percentage
//      Input :        Integer
//      Output:        float
//      Description:   Accept total marks and obtained marks from user 
//                      calculate percentage
//      Date :         04/11/2026
//      Autuor:        Vinay Sunil Patil

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1 , int iNo2)
{
    float iPer = 0.0f;
    
    if(iNo1 != 0)
    {
         iPer = (float)iNo2 / iNo1 * 100;
        
    }

    return iPer;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks \n");
    scanf("%d",&iValue1);

    printf("Enter obtained marks \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%f",fRet);

    return EXIT_SUCCESS;
}