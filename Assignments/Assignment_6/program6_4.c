//////////////////////////////////////////////////////////////////////////////
//  
//      Function Name: CheckTriangle
//      Input :        Integer,Integer,Integer
//      Output:        void
//      Description:  Checks if three sides can form a valid triangle
//                      Accept three integer values representing the lengths of the sides of a triangle. Determine whether they can form a valid triangle. All sides must be positive, and the sum of any two sides must be greater than the third side.
//       output        Input: 3 4 5→Valid Triangle
//                      Input: 123→ Invalid Triangle
//                      Input: 045 Invalid Triangle 
//      Date :         22/10/2026
//      Autuor:        Vinay Sunil Patil
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1 , int iSide2 , int iSide3)
{
    int iSum = 0;
    if((iSide1 > 0)&&(iSide2 > 0)&& (iSide3 > 0)
    &&(iSide1 + iSide2 > iSide3)
    &&(iSide2 + iSide3 > iSide1)
    &&(iSide3 + iSide1 > iSide2))
    {
        printf("The Traingle is valid");
    }
    else
    {
         printf("The Traingle is not valid");
    }
} 

int main()
{
    int iSide1 = 0 ,iSide2 = 0 ,iSide3 = 0;
    
    printf("Enter A Value of Trangle : \n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}