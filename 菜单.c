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
	system("公告.jpg");
	printf("请输入space以继续");
	scanf("%s",&input);
	if(0==strcmp(input,"space"))
	{
		printf("永劫无间\n");
	    printf("1.回到游戏\n");
	    printf("2.选项设置\n");
	    printf("3.开场视频\n");
	    printf("4.退至桌面\n");
	    scanf("%d",&a);
	    if(a == 1)
			printf("请点击space继续\n");
	    else if(a == 2)
		{
			printf("1.画质设置\n");
		    printf("2.音频设置\n");
		    printf("3.游戏设置\n");
		    printf("4.社交设置\n");
			printf("5.返回\n");
			scanf("%d",&c);
			if(c == 1)
				system("画质设置.jpg");
			else if(c == 2)
				system("音频设置.jpg");
			else if(c == 3)
				system("游戏设置.jpg");
			else if(c == 4)
				system("社交设置.jpg");
			else
				printf("请点击space继续\n");

		}
	    else if(a == 3)
			system("开场视频.mp4");
		else if(a == 4)
		{
			printf("请确认是否退出游戏1/2\n");
		    scanf("%d",&b);
		    if(b == 1)
				printf("正在退出\n");
		    else
				printf("返回初始菜单");
		}
		
	        
		else
				printf("请点击space继续\n");
		
	}
		
			


	return 0;
}