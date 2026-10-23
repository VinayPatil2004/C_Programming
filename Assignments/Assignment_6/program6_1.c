//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CalcutlateElectricityBill
//      Input :        Integer
//      Output:        Integer
//      Description:  Calcultate Electricity Bill
//                      Calculate Electricity BillProblem Statement: Accept the number of electricity units consumed and calculate the total bill using the following slab-wise rates. Each slab rate applies only to units within that slab
//      output          Input: 80 Bill 400.00
//                      Input: 150 Bill 850.00
//                      Input: 250 Bill 1700.00
//      Date :         22/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalcutlateElectricityBill(int iUnits)
{
    float fBill =0.0f;
    if(iUnits < 0)
    {
        printf("Invalid Units");
    }
    if(iUnits<=100)
    {
        fBill = iUnits * 5.0f;
        printf("The Electricity Bill is %2f",fBill);
    }
    else if(iUnits<=200)
    {
        fBill = (100 * 5.0f) +((iUnits - 100) * 7.0f);
        printf("The Electricity Bill is %2f ",fBill);
    }
    else 
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200)*10.0f);
        printf("The Electricity Bill is %2f",fBill);
    }
    
}
int main()
{
    int iUnit=0;

    printf("Enter consumed units :\n");
    scanf("%d",&iUnit);

    CalcutlateElectricityBill(iUnit);

    return EXIT_SUCCESS;
}    
