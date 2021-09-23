// Write a C program to check if a given number is palindrome or not.
#include<stdio.h>
#include<conio.h>

int main(){
    int num, num1, reverse = 0, remainder;
    
    printf("Enter any number: ");
    scanf("%d", &num);    
    num1 = num;
      while (num > 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    
    if (num1 == reverse){
        printf("The  number is a palindrome number"); 
    }
    else{
        printf("The  number is not a palindrome number"); 
    }    
    return 0;
}