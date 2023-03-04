#include<stdio.h>
void test01(){
    int i = 0;
    int sum = 0;
    while (i < 100)
    {
        /* code */
        sum += i;
        printf("%d ", i);
        i++;
    }
}
void test02(){

    int sum = 0;
    int i = 1;
    do
    {
        sum += i;
        i++;
    } while (i<=100);
    printf("test02() %d\n", sum);
}
int main(){

    test01();
    printf("--------\n");
    test02();

    return 0;
}