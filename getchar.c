#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char password[20] = {0};
    int ret = 0;
    printf("����������-->");
    scanf("%s",password);//�������벢�����password������
    //��ʣ��һ��\n���ڻ�����
    //��ȡһ��'\n'
    getchar();//����\n
    printf("��ȷ�ϣ�Y/N��:");
    ret = getchar();
    if(ret == 'Y')
        printf("ȷ�ϳɹ�");
    else
        printf("��ȡ��");
        
    return 0;
}