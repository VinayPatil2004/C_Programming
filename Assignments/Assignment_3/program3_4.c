//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: DisplayConvert
//      Input :       character
//      Output:        character
//      Description:  Accept one character from user and convert case of that character
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


void DisplayConvert(char cValue)
{
    if(cValue>='a'&& cValue <= 'z')
    {

        printf("%c",cValue -32);
    }
    else if(cValue >='A' && cValue <= 'Z')
    {
        printf("%c",cValue +32);
    }
}
int main()
{
    char CValue = '\n';
    printf("Enter character \n");
    scanf("%c",&CValue);

    DisplayConvert(CValue);

    return EXIT_SUCCESS;
}