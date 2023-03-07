#include<stdio.h>
int main()
{
    char *str = "hello";//这个hello是放在常量区，只读不能改
    printf("%p\n", "hello");
    printf("%p\n", str);
    //上面两个打印的地址应该是一样的

    //只读不改
    char *p;
    p = "hello";
    //p[0] = 'x';//运行时段错误


    //当要修改时
    char dst[] = "xuxuzhenshuai";
    dst[0] = 'X'; // Xuxuzhenshuai
    printf("%s\n", dst);
    return 0;
}