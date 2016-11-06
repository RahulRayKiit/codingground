#include<stdio.h>
void main()
{  
   int N;
   void sum(int);
   printf("Calculator to find the sum of first N natural numbers where N is entered by the you\n");
   printf("\nEnter a natural number\n");
   scanf("%d",&N);
   sum(N);
}

void sum(int N)
  {
    int i,s=0;
    for(i=1;i<=N;i++)
    { 
      s=s+i;
    }
    printf("The sum of first %d natural numbers is %d.",N,s);
  }
  