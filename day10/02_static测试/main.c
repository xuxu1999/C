#include<stdio.h>
void staticTest(){
    static int a = 20;
    a++;
    printf("%d\n", a);
}
int main()
{
    //printf("%d\n", a);
    staticTest();
    staticTest();
    staticTest();
    return 0;
}