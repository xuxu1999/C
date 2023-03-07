#include <stdio.h>
// 无const
void test01()
{
    char *str = "xuzihaishuaibi";
    str = "xuxuzhenshuai";
    printf("%s\n", str);
}

//有const
void test02(){

    int a[10] = {2};
    int b[10] = {9};
    const int *p = a;//指向的内容不能修改
    //p[0] = 1;

    int * const p1 = b;
   // p1 = a; 、、指针不能修改
    printf("%d\n", *p);
}
int main()
{
    test02();
    return 0;
}