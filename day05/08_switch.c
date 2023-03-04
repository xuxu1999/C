/*************************************************************************
        > File Name: 08_switch.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月03日 星期五 21时34分55秒
 ************************************************************************/

#include <stdio.h>
int main()
{

    int num = 0;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("choice one!\n");
        break;
    case 2:
        printf("choice two!\n");
        break;
    case 3:
        printf("choice three!\n");
        break;
    default:
        printf("choice others!\n");
        break;
    }

    return 0;
}
