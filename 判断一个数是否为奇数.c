#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%2 != 0)
		printf("a=%d是奇数",a);
	else
		printf("a=%d不是奇数",a);


	return 0;
}