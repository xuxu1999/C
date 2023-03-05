//
// Created by xuxu on 2023/3/5.
//
#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "xuxuzhenshuaiya";
    printf("%p\n", str);
    char *p = strchr(str, 'e');
    printf("%s\n",p);
    printf("p:%p\n", p);//偏移6

    char* p1 = strstr(str,"zh");
    printf("p1:%p\n",p1);
    printf("%s\n",p1);
    return 0;
}