//      Function Name: Pattern
//      Input :        Integer,Integer
//      Output:        void
//      Description:  Accept rows and coumn display pattern
//      Date :         06/10/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char  ch = '\0';

    for (i = 1; i<= iRow ;i++,ch++)
    {
        for(j = 1,ch = 'A';j <=iCol ;j++,ch++)
        {
            printf("%c \t",ch);
        }
        printf("\n\n");
    }
    
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter a two numbers \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}