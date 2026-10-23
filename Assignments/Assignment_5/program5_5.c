//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckCharacterType
//      Input :        Character
//      Output:       Character
//      Description:  = Identify Character Type
//                       Problem Statement: Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. Use character comparisons without using library character-classification functions.
//      Output:         
//              Input: A→ Uppercase Alphabet
//              Input: m Lowercase Alphabet
//              Input: 7 Digit
//              Input: Special Character
//      Date :         21/10/2026
//      Autuor:        Vinay Sunil Patil
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{

    if((cValue >='a')&&(cValue <='z'))
    {
        printf("this is lowercase alphabate");
    }
    else if((cValue >='A')&&(cValue <='Z'))
    {
        printf("THis is Uppercase alphabate");
    }
    else if((cValue >='0')&&( cValue <='9'))
    {
        printf("this is digit");
    }
    else 
    {
        printf("This is special Character");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);


    return EXIT_SUCCESS;
}