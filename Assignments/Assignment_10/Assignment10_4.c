/* 
     Function Name: FhtoCs
     Input :        float
     Output:       double
      Description:  Accept temperature in Farenheit from user and 
                    conver into celsius
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/ 
#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    
    float Cs = 0.0f;

    Cs = (fTemp - 32.0f) * (5.0f/9.0f);

    return Cs;

}
int main()
{
    float fValue = 0.0f ;
    double dRet = 0.0;

    printf("Enter temperature in Farenheit : \n");
    scanf("%f",&fValue);


    dRet = FhtoCs(fValue);

    printf("The temperature in celsius is: %f\n",dRet);

    return EXIT_SUCCESS;

}