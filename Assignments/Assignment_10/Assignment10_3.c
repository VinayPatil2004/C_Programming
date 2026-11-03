/* 
     Function Name: KMtoMeter
     Input :        Integer
     Output:        integer
      Description:  Accept distance  from user and convert into Kilometer
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/ 
#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iKm = 1000;

    iKm = iNo *iKm;

    return iKm;
}
int main()
{
    int fValue = 0;
    int dRet = 0.0;

    printf("Enter distance : \n");
    scanf("%d",&fValue);

    dRet = KMtoMeter(fValue);

    printf("The Area of Rectangle is: %d\n",dRet);

    return EXIT_SUCCESS;

}