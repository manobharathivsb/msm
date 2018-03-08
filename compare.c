#include <stdio.h>
int main(void)
{
int i,j;
char a[100],b[100];
for(i=0;i<=a;i++)
{
	scanf("%s",a[i]);
}
for(j=0;j<=b;j++)
{
	scanf("%s",b[j]);
}
if(a[i]>b[j])
{
	printf("%s",a[i]);
}
else
{
printf("%s",b[j]);
}
if(a[i]==b[j]);
{
	printf("%s",a[i]);
}return 0;
}
