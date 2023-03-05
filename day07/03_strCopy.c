/*************************************************************************
        > File Name: 03_strCopy.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月05日 星期日 19时39分18秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
/*
 *
 * 一定要注意越界 溢出
 * */
// strcpy()
void test01() {
    char str[] = "hello\0 world";
    char dst[20];
    strcpy(dst, str);// \0结束
    printf("%s\n", dst);//注意越界
}

//strncpy()
void test02() {


    char str[] = "nihao\0 xuxu";// \0之后的内容无法拷贝
    char dst[100];
    strncpy(dst, str, sizeof(str));
    printf("%s\n",dst);//nihao
}
void test03(){
    char src[]="hello xuxu";
    char dst[]="aaaaaaaaaaaaaaaaaaaaaaaaaa";
    strncpy(dst,src,sizeof (src));//hello xuxu
    //strcpy(dst,src);
    printf("%s\n",dst+2);//偏移两个
}
int main() {
    //test01();
    //test02();
test03();
    return 0;
}
