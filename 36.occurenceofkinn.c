#include<stdio.h>
int main()
{
	int n,k,r,c=0;
	printf("input\n");
	scanf("%d%d",&n,&k);
	while(n!=0)
	{
		r=n%10;
		if(r==k)
		c++;
		n=n/10;
	}
	printf("output : %d ",c);
}
