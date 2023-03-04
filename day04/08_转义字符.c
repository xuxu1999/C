#include<stdio.h>
int main(){

//转义字符

//char ch = 'abc';
char ch = '\n';//换行

printf("abc%cdef\n", ch);

char ch1 = '\r';//光标切换到句首

printf("xuxu%czhenshaui\n", ch1);//后面的zhenshuai覆盖xuxu

ch = '\b';//退格

printf("abcef%cxuxu\n", ch);

return 0;
}