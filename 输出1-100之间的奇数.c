#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int b = 1;
	while(b<=100)
	{
		if(b%2 != 0)
			printf("%d\n",b);
		b++;
	}

	

	return 0;
}