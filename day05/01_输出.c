#include<stdio.h>
int main(){
    printf("%%\n");

    printf("%%d\n");

    int a = 123;
    printf("%5d\n", a);

    printf("%-5d\n", a);

    printf("%05d\n", a);

    printf("-----------\n");

    double d = 3.14;
    printf("%lf\n", d);

    printf("b2=%6.3lf\n", d);

    char ch = 'a';
    putchar(ch);
    putchar('\n');
    return 0;
}