#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "        123456789         ";
    char *PStart = str;
    char *PEnd = str + strlen(str) - 1;
    // 从左往右
    while (*PStart == ' ' && *PStart != '\0')
    {
        /* code */ PStart++;
    }

    // 从右往左

    while (*PEnd == ' ' && PEnd != str)
    {
        /* code */
        PEnd--;
    }

    int n = PEnd - PStart + 1;
    printf("非空子串长度为：%d\n", n);//9

    //求非空子串
    char buf[100];

    strncpy(buf,PStart,n);
    buf[n] = '\0';//字符串结尾
    printf("%s\n", buf);

    return 0;
}