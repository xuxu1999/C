//
// Created by xuxu on 2023/3/5.
//
#include <stdio.h>

// scanf()不安全
void test01() {
    char str[20];
    scanf("%s", str);
    printf("%s\n", str);

    char str1[20];
    scanf("%s", str1);
    printf("%s\n", str1);
/*
 *  hello xuxu
    hello
    xuxu
    */

//不安全，不会检查溢出越界

    char str2[5];
    scanf("%s", str2);
    printf("%s\n", str2);
}

//gets() 允许空格
void test02() {

    char str[100];
    gets(str);
    printf("%s\n", str);
}

//fgets() 读到size-1，因为最后要加一个\0
void test03() {
    char str[10];
    fgets(str, sizeof(str), stdin);
    printf("%s\n",str);
    // fgets() 会把换行符也读进去
    printf("$%s&",str);
}

//puts() fputs()
void test04(){
    printf("hello\n");
    puts("hahaha");//会默认加一个\n
    char str[10]="xudashuai";
    fputs(str,stdout);
}
int main() {
    //test01();
    //test02();
//test03();
test04();

    return 0;
}
