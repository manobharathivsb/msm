#include <stdio.h>
int main(void) 
{
  int i,j;
  scanf("%d%d",&i,&j);
  printf("Before swapping\ni=%d\tj=%d",i,j);
  i=i^j;
  j=i^j;
  i=i^j;
  printf("\nAfter swapping\ni=%d\tj=%d",i,j);
	return 0;
}
