//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CalculteDiscount
//      Input :        Float 
//      Output:        void
//      Description:  Calcult the final amount after deducting the discount
//                      Problem Statement: Accept the total purchase amount and calculate the final payable amount after applying the following discount. Negative purchase amounts are invalid.
//
//      output          Input: 800 Payable Amount 800.00
//                       Input: 2000 Payable Amount 1800.00
//                        Input: 6000 Payable Amount 4800.00
//      Date :         22/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalculteDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmont = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalied Input");
    }
    else if(fAmount < 1000)
    {
        fFinalAmont = fAmount;
        printf("Your Final Amount is %2f",fFinalAmont);
    }
    else if ((fAmount >= 1000)&&(fAmount < 5000))
    {
        fFinalAmont = fAmount * 0.90;
        printf("Your Final Amount is %2f",fFinalAmont);
    }
    else 
    {
         fFinalAmont = fAmount * 0.80;
        printf("Your Final Amount is %2f",fFinalAmont);
    }
   
}
int  main()
{
    float fAmount = 0.0f;

    printf("Enter purches Amount \n");
    scanf("%f",&fAmount);

    CalculteDiscount(fAmount);
    return EXIT_SUCCESS;
}