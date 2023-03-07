#include <stdio.h>
#include <string.h>

// 段错误，操作野指针
void test()
{
    char *str = "xuzihaidashuaibi";
    char *p;//指向一段未知内存
    strcpy(p, str);
}

// 正确的方法
char *test02(char *dst, char *str)
{

    int i = 0;
    while (*(str + i) != '\0')
    {
        dst[i] = str[i];
        i++;
    }

    return dst;
}
int main()
{
    char buf[100];
    char *dst = buf;
    char *str = test02(dst, "xuzihai");
    printf("%s\n", str);
    return 0;
}