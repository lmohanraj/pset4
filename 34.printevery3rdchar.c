 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,n;
 	char s[20];
 	printf("input\n");
 	scanf("%s",s);
 	n=strlen(s);
 	for(i=0;i<n;i=i+3)
 	{
 		printf("%c",s[i]);
 	}
 	return 0;
 }
