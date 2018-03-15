#include <stdio.h>
int main(void)
{
	int a,b,i,c;
	scanf("%d\t%d",&a,&b);
	{
		for(i=1;i<=10;i++)
		if(a%i==0 && b%i==0)
			c=i;
		printf("%d",c);
		}
		return 0;
}
