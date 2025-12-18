#include<stdio.h>

int main() {
    
    // Basic data types of C language.
    char letter = 'A';
    int number = 1;
    short shortNumber = 10;
    long long longNumber = 1234567890;
    float floatNumber = 12.34f;
    double doubleNumber = 123.456;

    // Strings in C are character arrays
    char name[] = "Arman";

    // Display values
    printf("Character: %c\n", letter);
    printf("Integer: %d\n", number);
    printf("Short Number: %d\n", shortNumber);
    printf("Long Number: %d\n", longNumber);
    printf("Float Number: %f\n", floatNumber);
    printf("Double Number: %f\n", doubleNumber);
    printf("String: %f\n", name);
    
    return 0;
}