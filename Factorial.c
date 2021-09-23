// Write a program to find factorial of a given number
#include<stdio.h>
#include<conio.h>

int factorial (int no){
   int f;
   if ( ( no==1) || (no==0))
      return 1;
   else
      f= no*factorial (no-1);
   return f;
}
int main(){
   int no,f;
   int factorial (int);
   printf ("Enter a number ");
   scanf ("%d", &no);
   f= factorial (no);
   printf ("factorial of the number = %d",f);
   return 0;
}
