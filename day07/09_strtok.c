//
// Created by xuxu on 2023/3/5.
//
#include <stdio.h>
#include <string.h>
int main(){

    char str[]="xuxu,zhen,shuai";
    char temp[100];
    strncpy(temp,str,sizeof (str));
    printf("%s,&:%p\n",temp,temp);

    char *p=strtok(temp,",");
    while(p){
        printf("%s,&:%p\n",p,p);
        p=strtok(NULL,",");//第二次调用要用NULL
    }

    return 0;
}
