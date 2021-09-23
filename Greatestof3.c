// Write num1 program to find greatest of three numbers
#include<stdio.h>
#include<conio.h>

int main(){
    int num1, num2, num3, result;
    printf("\nEnter three numbers to compare:- ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("\nThe greatest  number is: %d", result); 
    return 0;
}