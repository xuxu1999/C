#include<stdio.h>
int main(){

    int a = 5;
    int b = 2;
    double c;

    c = a / b;
    printf("c=%lf\n", c);

    c = 1 / 2;
    printf("c=%lf\n", c);

    //两数相除，必须有一个数是小数，否则会取整
    c = 1.0 / 2;
    printf("%lf\n", c);
    return 0;
}