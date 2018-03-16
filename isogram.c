#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
char s[20];
scanf("%[^/n]s",s);
for(i=0;s[i]!='\0';i++)
{
for(j=i+1;s[j]!='\0';j++)
{
    if(s[i]==s[j])
   count++;
}}
if(count>0)
printf("not an isogram");
else
printf("isogram");
return 0;
}
		
