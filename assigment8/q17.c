#include<stdio.h>
 void main()
 {
    int i,j;
     for(i=5;i>=1;i--)
     { 
         for(j=1;j<=5-i;j++)
     {
      printf(" ");
     }
        for(j=1;j<=i;j++)
        {
            if(j==1||i==5)
            printf("*");
            else
             printf(" ");
        }
        for(j=1;j<i;j++)
        { 
            if(j==i-1||i==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     }
 }