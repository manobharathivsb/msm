#include <stdio.h>
int main(void)
{
	int a,b,c,i,d;
	scanf("%d%d",&a,&b);
	scanf("%d",&c);
	{
		for(i=0;i<=c;i++)
		{
		if((a%i==0)&&(b%i==0))
		{
			d=i;
		}
		printf("%d",i);
		}
		return 0;
	}
}
