/*************************************************************************
        > File Name: 10_test.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月07日 星期二 11时02分52秒
 ************************************************************************/

#include <stdio.h>
int main()
{

        int a = 10;
        int *p = &a;
        int sizeP = sizeof p; // 64位系统下就是8,32位系统是4
        /*
        数组作函数时
        void test(char str[],char str1[10000000],char * str2)
        都等价于传一个指针，64位系统下就是8位
        要操作该数组就要把数组长度n传过去


         */
        printf("%d\n", sizeP); // 8
}
