#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char password[20] = {0};
    int ret = 0;
    printf("请输入密码-->");
    scanf("%s",password);//输入密码并存放在password数组中
    //还剩余一个\n留在缓冲区
    //读取一下'\n'
    getchar();//读走\n
    printf("请确认（Y/N）:");
    ret = getchar();
    if(ret == 'Y')
        printf("确认成功");
    else
        printf("已取消");
        
    return 0;
}