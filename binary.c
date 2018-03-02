#include <stdio.h>
int main(void)
{

	char a[100];
	int i,length=0,count=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
	length++;
	if(a[i]=='0'||a[i]=='1')
	count++;
	}
	if(count==length)
		printf("it is binary reptresentation");
	else
		printf("it is not binary representation");
	return 0;
}
