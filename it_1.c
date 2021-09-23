#include"stdio.h"
#include<conio.h>

int main(){
    char str1[] = "Define as a array ";
    char *str2 = "Define as a pointer";
    printf("%s",str1);
    printf("\n%s",str2);
    printf("\n%s",str2+5);
    return 0;
}