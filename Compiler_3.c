//Write a C program to identify whether a given line is a comment or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char line[100];
    int i = 2, l1 = 0;
    printf("Enter Line:\n");
    gets(line);
    if (line[0] == '/'){
        if (line[1] == '/')
            printf("It is single line comment.\n");
             else if (line[1] == '*')
            {
            for (i = 2; i <= 100; i++){
            if (line[i] == '*' && line[i + 1] == '/'){
                printf("It is a multi line comment.\n");
                l1 = 1;
                break;
                }else
                 continue;
            }
            if (l1 == 0)
                printf("It is not a comment.\n");
            } else
            printf("It is not a comment\n");
    } else
        printf("It is not a comment\n");
    return 0;
}