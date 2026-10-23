//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: DisplayConvert
//      Input :        character
//      Output:        bool
//      Description:  Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
//      Date :         20/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckVowel(char CValue)
{
    if(CValue == 'a'|| CValue == 'e'||CValue == 'i'||CValue == 'o'||CValue == 'u'||
       CValue == 'A'||CValue == 'E'||CValue == 'I'||CValue == 'O'||CValue == 'U')
    {
        return true;
    }  
    else
    {
        return false;
    }
}       
int main()
{

        char cValue = '\0';
        bool bRet = false;

        printf("Enter character \n ");
        scanf("%c",&cValue);

        bRet =CheckVowel(cValue);

        if(bRet == true)
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
   

        return EXIT_SUCCESS;
}

