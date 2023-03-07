#include <stdio.h>

char *strCopy(char *dst, char *str)
{

    int strLen = sizeof(str) / sizeof(char);
    char *pStart = str;
    char strSrc[strLen + 1];
    for (int i = 0; i < strLen; i++)
    {

        strSrc[i] = str[i];
        if(str[i]=='\0'){
            break;
        }
    }

    return dst = strSrc;
}
int main()
{

    char str[] = "123123";
    // 不使用库函数进行拷贝
    char *dest = NULL;
    dest = strCopy(dest,str);
    printf("%s\n", dest);//有问题，打印出来的乱码
    return 0;
}