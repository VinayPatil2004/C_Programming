//      Function Name:  MultiFact
//      Input :        Integer
//      Output:        Integer
//      Description:   Given number from user and Display multiplication 
//                      Fcator
//      Date :         03/11/2026
//      Autuor:        Vinay Sunil Patil

#include<stdio.h>
#include<stdlib.h>

int MultiFact(int iNo)
{
    int iCnt = 0, iMulti = 1;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
            {
                iMulti = iMulti * iCnt;
            }
    }
    return iMulti;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf(" The Number of Factor %d\n",iRet);

    return EXIT_SUCCESS;
}