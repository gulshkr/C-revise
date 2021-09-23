#include <stdio.h>

int main()
{
    // Single line comments: compiler will ignore this
    /*
    this is a multi
    line 
    comment
    */
    // int, float, char

    int a1 = 7;                 // 2 to 4 bytes
    unsigned short integer = 8; // 2 bytes
    long integer1 = 8;          // 4 bytes
    short integer2 = 8;         // 2 bytes

    float b1 = 8.0;                    // 4 bytes - 6 decimal precision
    double myfloat1 = 7.45;            // 8 bytes - 15 decimal places precision
    long double myfloat2 = 7.43453455; // 10 bytes - 19 decimal places precision

    char c1 = 't'; //1 byte
    printf("hello %c", c1);
    printf("The size taken by int is %d\n", sizeof(int));
    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by float is %d\n", sizeof(float));
    printf("The size taken by double is %d\n", sizeof(double));
    printf("The size taken by long double is %d\n", sizeof(long double));

    printf("\n*******Rules for creating variables*********");
    int harryName;   // This is variable declaration
    harryName = 76;  // This is variable initialization
    char five = '5'; // This is variable declaration and initialization

    const int i = 9;
    // i = 10;
    harryName = 98;

    printf("\n\n*******Types of operators in C*********");

    /*
    Arithmetic Operators
    Relational Operators
    Logical Operators
    Bitwise Operators
    Assignment Operators
    Misc Operators
   */
    // Arithmetic Operators
    int a = 60, b = 7, c = 8;
    printf("The sum of a and b is %d\n", a + b);
    printf("The difference of a and b is %d\n", a - b);
    printf("The multiplication result of a and b is %d\n", a * b);
    printf("The division result of a and b is %d\n", a / b);
    printf("The modulo result of a and b is %d\n", a % b);
    printf("The increment result of a is %d\n", ++a);
    printf("The decrement result of a is %d\n", --b);

    // Relational Operators
    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan);
    printf("%d\n", harry != rohan);
    printf("%d\n", harry > rohan);
    printf("%d\n", harry < rohan);

    // Logical Operators
    int h = 0, j = 1;
    printf("The logical operator returned %d\n", h && j);
    printf("The logical operaTor returned %d\n", h || j);
    printf("The logical operator returned %d\n", !j);
    printf("The logical operator returned %d\n", !h);

    // Bitwise Operators
    // A = 60 B=13
    // A = 00111100
    // B = 00001101
    // R = 00001100
    int A = 60, B = 14;
    printf("Bitwise and operator returned %d\n", A & B);
    printf("Bitwise or operator returned %d\n", A | B);
    printf("Bitwise xor operator returned %d\n", A ^ B);
    printf("Bitwise ones complement operator returned %d\n", ~B);
    printf("Bitwise left shift operator operator returned %d\n", A << B);
    printf("Bitwise right shift operator operator returned %d\n", A >> B);

    // Assignment Operators
    // =, +=, -=, *=, %=, etc
    int ha = 9;
    ha += 9;
    printf("ha is %d\n", ha);

    // Misc Operators - &, *, ?:

    printf("\n\n*******Taking input from user in C*********");
    int harryInput;
    printf("\n Please enter the value of harryInput");
    // scanf("%d", &harryInput);
    // printf("\n You Entered %f as harryInput", (float) harryInput);

    // int num1, num2;
    // scanf("%d", &num1);
    // scanf("%d", &num2);
    // printf("\n num1/num2 is %f", (float)num1/num2);
    printf("\n\n*******Decision Making in C*********\n\n");
    int age;
    printf("Enter your age\n");
    // scanf("%d", &age);
    age = 44;
    if (age < 18)
    {
        printf("You can drive");
    }
    else if (age >= 18 && age <= 24)
    {
        printf("You are banned from driving");
    }
    else
    {
        printf("You can drive but drive carefully");
    }

    // Exercise: Tell me about Switch statement
    int i4 = age > 3 ? 100 : 200; //short hand if else
    printf(" %d ", i4);

    printf("\n\n*******Loop in C*********\n\n");
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }

    for(int j = 0; j < 67; j++)
    {
        printf("%d\n", j);
    }

    do
    {
        printf("do while loop is running");
    } while (j>65656);
    
    printf("\n\n*******Functions in C*********\n\n");
    

    return 0;
}
