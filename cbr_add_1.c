#include<stdio.h>
int input()
{
   int *a;
   scanf("%d",a);
   }
int compute(int *a)
{
   *a=*a+1;
   }
void output(int x)
{
   printf("%d",x);
   }
int main()
{
   int a,sum;
   printf("read a\n");
   a=input();
   sum=compute(&a);
   output(sum);
   return 0;
}

