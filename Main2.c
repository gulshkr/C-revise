#include <stdio.h>
#include<string.h>

int glo = 76;
// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

void newPrint(char * char1)
{
    printf("The value is %s\n\n\n\n", char1);
}

int sum(int a, int b)
{
    return a+b;
}

float average(float a, float b)
{
    return (a+b)/2;
}

struct Books{
    char name[50];
    char author[50];
    int price;
} book;


void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book Price is %d\n", bk.price);
}
int main(){

    // Array - array is defined as the collection of similar type of data items stored at contiguous memory location (It is declared using data_type array_name[array_size])(remember this square bracket[])

    // Functions - is a group of statements that together perform a task
    // printf("The average of 100 and 299 is %f", average(100,299));
    // int glo = 87;
    // printf("Glo is %d", glo);
    // int arr[10] = {0,1,2,3,4,5,6,70,8,9};
    // for(int i = 0; i < 10; i++)
    // {
    //     printf("Enter the values for index %d \n", i);
    //     scanf("%d", &arr[i]);
    // }

    // for(int i = 0; i < 10; i++)
    // {
    //     printf("The value for index %d is %d\n", i, arr[i]);
    // }
    
    
    // printf("%d", arr[7]);

    // Pointers - Pointer in c is a variable which stores the address of another variable, The variable can be of int, char , array, function or any other pointer. (It is declared using * as you can see below example) and ampercent(&) to the store the data
    // int a = 98;
    // printf("%d\n", a);
    // int* ptr = NULL;
    // if (!ptr)
    // {
    //     printf("pointer is not null");
    // }
    // ptr = &a;
    // *ptr = 188;
    // printf("%d", a);


    // Strings
    // char name[3] = {'m', 'y', '\0'};
    // char str1[65], str2[98], str3[32];
    // strcpy(str1, "Harry");
    // strcpy(str2, "Rohan");
    // strcat(str1, str2);
    // printf("%d", strcmp(str1,str2));

    

    // Structures - A structure is a user defined data type in c/c++. A structure can be used to group data type that can be used to group items of possibly different types into a single type. (used struct keyword to create a structure)
    // Ques.) How to access structure elements? -> using dot operator (.) as you can see (below bk1.price, bk1.name )
    // How to access elements of nested structures 
    struct Books bk1, bk2;
    strcpy(bk1.name, "C Programming");
    strcpy(bk1.author, "Dennis");
    bk1.price = 78;
    printStruct(bk1);

    return 0;

    
}
