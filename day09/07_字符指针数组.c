#include<stdio.h>
void printNames(char **names, int n){
    //以为的len
   // int len = sizeof(names) / sizeof(*names);//1
   // printf("%d----\n", len);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", *(names + i));
    }
    
}
void printNames(char *names[], int n);
int main()
{

    char *names[] = {"xuxu", "xuzihai", "zhangsan", "lisi"};
    int n = sizeof(names) / sizeof(*names);
    //printf("%d\n", n);
    printNames(names, n);

    return 0;
}