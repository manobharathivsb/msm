#include <stdio.h>
int main(void) 
{
	int l,b,h,s,v;
	scanf("%d\n%d\n%d\n",&l,&b,&h);
	s=2*((l*b)+(b*h)+(h*l));
	v=l*b*h;
	printf("%d\n",v);
	printf("%d\n",s);
	return 0;
}

  
    

