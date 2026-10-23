//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckLeapYear
//      Input :        integer
//      Output:        integer
//      Description:  = Calculate Student Grade
//                         Accept the marks of a student out of 100 and display the grade according to the following criteria. Marks outside 0-100 are invalid.
//      Output:         
//                  Input: 85 Grade B
//                  Input: 35 Fail
//                  Input: 105 Invalid Marks
//     
//      Date :         21/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayGrade( float fMarks)
{
    if(fMarks >= 90)
    {
        printf("The Grade is : A \n");
    }
    else if(fMarks >=75)
    {
        printf("The Grade is : B \n");
    }
    else if(fMarks >=60)
    {
        printf("The Grade is : C \n");
    }
    else if(fMarks >=40)
    {
        printf("The Grade is : D \n");
    }
    else
    {
        printf("The Student is Fail");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks :\n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}