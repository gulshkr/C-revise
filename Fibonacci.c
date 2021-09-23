// Write a C program to print Fibonacci series in a given range.
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int a = 0;
    int b = 1;
    int c=a+b;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nThe series is: %d%d",a,b);
    for (int i = 3; i <= n; i++)
    {
        printf("%d",c);
        a = b;
        b = c;
        c = a+b;
    }
    return 0;
}