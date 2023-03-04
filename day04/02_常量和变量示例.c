/*************************************************************************
        > File Name: 02_常量和变量示例.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月03日 星期五 15时31分39秒
 ************************************************************************/
#define MAX 100
#include <stdio.h>
int main(){

    int a = MAX;

    const int c = MAX;
    c=200;

    int d;
    d = 100;

    extern int d;
    
    return 0;

}
