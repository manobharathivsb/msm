#include<stdio.h>
int main()
{
 int a,b,c;
  scanf("%d",&a);
 while(a>0)
 {
  b=a%10;
  c=a/10;
  a=c;
  printf("%d",b);
 }
   return 0;

 }
