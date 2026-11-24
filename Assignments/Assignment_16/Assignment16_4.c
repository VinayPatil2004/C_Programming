//      Function Name: Pattern
//      Input :        Integer,Integer
//      Output:        void
//      Description:  Accept rows and coumn display pattern
//      Date :         06/10/2026
//      Autuor:        Vinay Sunil Patil
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    int iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
        iNo = iRow - i + 1;
       
        for(j = 1; j<= iCol; j++)
        {
            printf("%d\t",iNo);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two number \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS; 
}