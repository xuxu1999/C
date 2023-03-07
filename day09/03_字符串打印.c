#include<stdio.h>
int main()
{
    char *str = "xuxuzhenshuaia";
    int i = 0;
    while(*(str+i)!='\0'){//str[i]
        putc(*(str + i), stdout);
        i++;
    }
    putchar('\n');
    return 0;
}