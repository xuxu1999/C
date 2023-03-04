#include<stdio.h>
int main(){

    char c = 'a';
    int sizeOfC = sizeof c;
    printf("sizeof(ch):%d\n", sizeOfC);
    char d = ' ';
    printf("%d\n",d);
    printf("%d\n", c - d);
    return 0;
}