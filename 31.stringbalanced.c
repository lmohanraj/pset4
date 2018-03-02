#include<stdio.h>
#include<string.h>
int main()
{
	int i,m=0,n,n1=0;
	char s[20];
	printf("input\n");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='(')
		m++;
		if(s[i]==')')
		n1++;
	}
	if(m==n1)
	printf("yes");
	else
	printf("no");
	return 0;
}
