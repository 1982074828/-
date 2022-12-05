#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int k = 1;
	int n = 0; 
	for(n=1;n<=2;n++)
	{
		for(i=1;i<=n;i++)
		{
			k=k*i;
		}
		a=a+k;
	}
	printf("%d",a);
	return 0;
}