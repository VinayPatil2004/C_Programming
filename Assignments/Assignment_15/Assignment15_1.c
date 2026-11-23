//      Function Name: 
//      Input :        void
//      Output:        void
//      Description:  Accept full name from user and disply
//      Date :         04/11/2026
//      Autuor:        Vinay Sunil Patil

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    printf("Please enter your full name \n");
    scanf("%[^\n]s",Name);
    
    printf("Your name is %s\n",Name);

    return EXIT_SUCCESS;
}