#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
	char input[100];
	int a = 0;
	int b = 0;
	int c = 0;
	system("����.jpg");
	printf("������space�Լ���");
	scanf("%s",&input);
	if(0==strcmp(input,"space"))
	{
		printf("�����޼�\n");
	    printf("1.�ص���Ϸ\n");
	    printf("2.ѡ������\n");
	    printf("3.������Ƶ\n");
	    printf("4.��������\n");
	    scanf("%d",&a);
	    if(a == 1)
			printf("����space����\n");
	    else if(a == 2)
		{
			printf("1.��������\n");
		    printf("2.��Ƶ����\n");
		    printf("3.��Ϸ����\n");
		    printf("4.�罻����\n");
			printf("5.����\n");
			scanf("%d",&c);
			if(c == 1)
				system("��������.jpg");
			else if(c == 2)
				system("��Ƶ����.jpg");
			else if(c == 3)
				system("��Ϸ����.jpg");
			else if(c == 4)
				system("�罻����.jpg");
			else
				printf("����space����\n");

		}
	    else if(a == 3)
			system("������Ƶ.mp4");
		else if(a == 4)
		{
			printf("��ȷ���Ƿ��˳���Ϸ1/2\n");
		    scanf("%d",&b);
		    if(b == 1)
				printf("�����˳�\n");
		    else
				printf("���س�ʼ�˵�");
		}
		
	        
		else
				printf("����space����\n");
		
	}
		
			


	return 0;
}