#include <stdio.h>
int main(void)
{
int n,count=0,i;
scanf("%d",&n);
for(i=i;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count!=2)
{
printf("the given number is  a composite");
}
else
{
printf("the given number is not  a composite");
}
return 0;
}
