#include<stdio.h>
#include<string.h>
int main()
{
    char *str = "abc";
    //*str = "xxuxu";//段错误
    printf("%s\n", str);

    char *p = "abc";
    char temp[100];
    strcpy(temp, p);//正确

    char p2[] = "abc"; // 把abc一个一个拷贝进数组,末尾有个\0;
    printf("%lu\n", sizeof(p2) / sizeof(*p2));//4
    printf("\n%d\n", p2[sizeof(p2) / sizeof(*p2)]);

    return 0;
}