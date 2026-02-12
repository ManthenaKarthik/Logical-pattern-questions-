#include<stdio.h>
void main()
{
 int row,col;
 printf("enter values of row and column\n");
 scanf("%d%d",&row,&col);
 for(int i=1;i<=row;i++)
 {
  for(int j=1;j<=col;j++)
   {
    if (j==1||i==row||i>j||i==j)
     {
     printf("*\t");
     }
     else
     {
      printf(" \t");
     }
    }
   printf("\n");
 }
 
}