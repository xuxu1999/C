#include<stdio.h>
int main(){

    int a = 1;
    int b = 0;

    b = a++;
    printf("a= %d, b= %d\n", a, b);

    a++;
    b = a;
    printf("a= %d, b= %d\n", a, b);
    return 0;
}