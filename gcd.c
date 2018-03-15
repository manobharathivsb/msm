#include <stdio.h>
int main(void)
{
	int a,b,i,d;
	scanf("%d%d",&a,&b);
	{
		for(i=0;i<=10;i++)
		{
		if(a%i==0 && b%i==0)
		{
			d=i;
		}
		printf("%d",d);
		}
		return 0;
	}
}
