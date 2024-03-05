// Susan Kimani ENE212-0083/2021

#include <stdio.h>
#define MAX 50

int main(){
 int a[MAX] [MAX], b[MAX] [MAX], product [MAX][MAX] ;
 int arows, acolumns, brows,bcolumns;
 int i, j, k;
 int sum=0; 
  // Entering rows and columns matrices
  printf("enter rows and columns of the matrix  a ");
  scanf("%d %d", &arows, &acolumns);
  printf("enter the elements of the matrix a\n ");
  for ( i=0; i<arows; i++)
   {
   for ( j=0; j<acolumns; j++)
   {
       scanf("%d", &a[i][j]);
   } 
  }
  printf("enter rows and columns of the matrix b ");
  scanf("%d %d", &brows, &bcolumns);
  
  if (brows != acolumns)
  { 
      printf("Sorry! we cannot multiply matrix a and b");
  }
  else 
  { 
      printf("enter the elements of the matrix b\n ");
      for ( i=0; i<brows; i++)
       {
       for ( j=0; j<bcolumns; j++)
       {
           scanf("%d", &b[i][j]);
       } 
      }
  }
  printf("\n");
  for ( i=0; i<arows; i++)
       {
       for ( j=0; j<bcolumns; j++)
          { 
           for (k=0; k<brows; k++)
           { 
           sum += a [i][k] * b[i][k];
           }
           product [i][j] = sum;
           sum = 0;
          }   
       }
       // printing results of matrix multiplication
   printf("Resultant matrix \n"); 
   for ( i=0; i<arows; i++)
       {
       for ( j=0; j<bcolumns; j++)
           {
           printf("%d", product [i][j]);
           }
           printf("\n");
       }
    return  0;
 }
   
  
  