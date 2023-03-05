//
// Created by xuxu on 2023/3/5.
//
#include <stdio.h>
#include <string.h>
int main(){

    char str[100]="xudashuai";
    int len=strlen(str);
    printf("%d\n",len);//9
    printf("sizeof(str):%lu\n",sizeof (str));//100


    char str2[100]="\0xuxu";
    len=strlen(str2);
    printf("%d\n",len);//0
    printf("sizeof(str2):%lu\n",sizeof (str2));
    return 0;
}
