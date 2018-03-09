#include <stdio.h>
#include<math.h>
int main(void)
{
	int a,b,i,c=0;
	scanf("%d%d",&a,&b);
	for(i=0;i<=a;i++)
	 if(pow(b,i)==a)
	  c++;
	if(c>0)
	printf("yes");
	else
	printf("No");
	return 0;
}
