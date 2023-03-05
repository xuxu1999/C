/*************************************************************************
        > File Name: 06_sprintf.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月05日 星期日 20时31分19秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int a=1,b=2,c=3;
    sprintf(str,"格式化字符串：a=%d ,b=%d, c=%d\n",a,b,c);
    printf("%s",str);//格式化字符串：a=1 ,b=2, c=3

    return 0;
}
