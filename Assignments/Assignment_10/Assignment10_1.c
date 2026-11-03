/* 
     Function Name: CircleArea
     Input :        float
     Output:        double
      Description:  Accept radius of circle from user and
                     calculate in Area of circle
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/ 
#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0;

    Area = PI * fRadius * fRadius;

    return Area;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The Area of circle is: %f\n",dRet);

    return EXIT_SUCCESS;

}