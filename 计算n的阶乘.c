#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i =1;
	int n = 0;
	int k = 1; 
	scanf("%d",&n);
	while(i<=n)
	{
		k=k*i;
		i++;

	}
	printf("%d",k);
	return 0;
}