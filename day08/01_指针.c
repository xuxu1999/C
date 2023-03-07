/*************************************************************************
  > File Name: 01_指针.c
  > Author: 徐大帅
  > Mail: 2978615862@qq.com
  > Created Time: 2023年03月06日 星期一 11时39分43秒
 ************************************************************************/

#include <stdio.h>
// 万能指针 void*
void test()
{
    void *p = NULL;
    int a = 10;
    p = &a;
    printf("%d\n", *(int *)p);
}

// 指针加减法访问数组
void test02()
{
    char str[] = "xuzihai";
    char *pStart = str;
    char *pEnd = str + (int)sizeof(str) - 1;
    printf("pEndOfAscll:%d\n", *pEnd);
    printf("%c,%c\n", *pStart, *pEnd);

    printf("---------\n");
    for (int i = 0; i < (int)sizeof(str); i++)
    {
        putchar(*pEnd);
        pEnd--;
    }
    printf("\n");
}
int main()
{
    test();
    test02();

    return 0;
}
