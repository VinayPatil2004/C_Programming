//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: Display
//      Input :        no input
//      Output:        Integer
//      Description:  Display 1 to 5
//      Date :         19/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    i= 5;

    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}