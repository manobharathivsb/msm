#include <stdio.h>
int main(void)
{
	int c=0,i;
	char b[50];
	scanf("%[^\n]s",b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
		c++;
	}
	printf("%d",c);
	return 0;
}

