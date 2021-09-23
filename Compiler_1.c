// Write a C Program to Scan and Count the number of characters, words, and lines in a file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char file_name[500];

    char ch;
    int characters, words, lines;

    printf("Enter the name of file:  ");
    scanf("%s", file_name);
    file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
    }

    characters = words = lines = 0;
    // fgetc = used to obtain input from a file single character at a time EOF exit of file
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }
    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("\n");
    printf("Total number of characters = %d\n", characters);
    printf("Total number of words      = %d\n", words);
    printf("Total number lines      = %d\n", lines);

    fclose(file);

    return 0;
}