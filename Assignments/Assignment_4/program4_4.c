//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckVotingEligibility
//      Input :        void
//      Output:        bool
//      Description:  = Check Voting Eligibility
//                      Accept the age of a person and determine whether the person is eligit person must be at least 18 years old to vote. A negative age should be considered invalid.
//      Expected Output:
//                          Input: 21 Eligible for Voting        
//                          Input: 16 Not Eligible for Voting       
//                           Input:-5 Invalid Age    
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int Age)
{
    if(Age>18)
    {
        printf("The Person is Eligibil for Voting");
    }
    else
    {
        printf("The Person is not Eligibil for Voting");
    }
}
int main()
{

    int iAge = 0;

    printf("Enter Person Age \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}