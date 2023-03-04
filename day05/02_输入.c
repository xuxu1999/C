#include<stdio.h>

void Input_char(){

    char a;
    scanf("%c", &a);
    char b = getchar();
    char c = getchar();//吃掉缓冲区的\n
    printf("%c,%c\n", a, c);
}
int main(){

//输入

Input_char();

return 0;
}