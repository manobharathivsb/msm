#include<stdio.h>
int main(void)
{
	int a[10],i,m;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	m=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>m)
		m=a[i];
	}
	printf("%d is the max number among 10 numbers",m);
	return 0;
}
