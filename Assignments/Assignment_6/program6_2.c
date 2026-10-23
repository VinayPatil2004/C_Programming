//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckAddmission
//      Input :        Float ,Integer
//      Output:        void
//      Description:  Student is Eligible For Addmition or not
//                       A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years. Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as invalid input.
//          output
//                  Input: 75 18Eligible for Admission
//                  Input: 55 19→Not Eligible
//                   Input: 80 16 Not Eligible
//      Date :         22/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckAddmission(float fMarks , int iAge)
{

    if((fMarks <0 || fMarks > 100)&&(iAge<0 || iAge > 100))
    {
             printf("Invailed Input \n");
    }
     else if((fMarks >= 60)&&(iAge >= 17))
    {
        printf("The Student is Eligible For Addmition \n");
    }
    else
    {
        printf("The Student is not Eligible for Addmition \n");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;
    
    printf("Enter marks and age :\n");
    scanf("%f %d",&fMarks,&iAge);

    CheckAddmission(fMarks,iAge);

    return EXIT_SUCCESS;
}