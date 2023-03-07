#include<stdio.h>
#include<string.h>
int main()
{
    char *str = "afajfajkajfjkanflnaqooakjfknvnbvnalkanklzvnnansjjknlknvl";
    int n = 0;
    while(1){
        char *dst = strstr(str, "an");
        if (dst==NULL)
        {
            /* code */
            break;
        }else{
            n++;
            str = dst + strlen("an");
        }
        
    }
    printf("%d\n", n);
    return 0;
}