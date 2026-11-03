/* 
     Function Name:  RectArea
     Input :       float
     Output:        double
      Description:  Accept Width and Hright of rectangle from user and
                     calculate in Area of Rectangle
      Date :         31/10/2026
      Autuor:        Vinay Sunil Patil
*/ 
#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth , float fheight)
{
    float Area = 0.0f;

    Area = fWidth * fheight;

    return Area;

}
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Widhth of Rectangle : \n");
    scanf("%f",&fValue1);

    printf("Enter Height of Rectangle : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("The Area of Rectangle is: %f\n",dRet);

    return EXIT_SUCCESS;

}