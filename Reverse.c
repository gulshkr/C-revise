// Write a program to reverse an input number using recursion 
#include<stdio.h>
#include<conio.h>

int reverse_no(int num) {
    static int  reverse = 0;
    static int start = 1;
    if (num > 0) {
        reverse_no(num/10);
        reverse += (num % 10) * start;
        start *= 10;
    }
    return reverse;
}

int main() {
    int num;
    printf("\nEnter the number to reverse. ");
    scanf("%d", &num);
    printf("\nThe reverse of the number is: %d", reverse_no(num));
    getchar();
    return 0;
}