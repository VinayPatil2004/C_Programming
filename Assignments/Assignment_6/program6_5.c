//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CalcultateBonus
//      Input :        Float,Integer
//      Output:        Float
//      Description:  Calcultate Employee Bonus based on year of service
//                      Accept an employee's monthly salary and completed years of service. Calculate the bonus using these rules: more than 10 years of service carns a bonus of 15% of monthly salary; 5 to 10 years earns 10%; less than 5 years earns 5%. Salary must be positive and years of service cannot be negative.
//      Output:       Input: 30000 12 Bonus 4500.00
//                      Input: 20000 7 Bonus 2000.00
//                      Input: 10000 2 → Bonus 500.00
//      Date :         22/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalcultateBonus(float fSalary , int iYear)
{
    float fBonus = 0.0f;

    if(iYear > 10)
    {
         fBonus = fSalary * 0.15; 
         printf("Your Bonus is %2f",fBonus);
    }
    else if(iYear >= 5)
    {
         fBonus = fSalary * 0.10; 
         printf("Your Bonus is %2f",fBonus);
    }
    else 
    {
        fBonus = fSalary * 0.05; 
        printf("Your Bonus is %2f",fBonus);
    }
}
int main()
{
    float fSalary = 0.0f;
    int iYear = 0;

    printf("Enter your Salary And Years of services: \n");
    scanf("%f %d",&fSalary,&iYear);

    CalcultateBonus(fSalary,iYear);

    return EXIT_SUCCESS;
}