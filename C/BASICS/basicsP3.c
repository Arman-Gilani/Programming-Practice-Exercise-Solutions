/*
============================================================
Program Title: BASICS - 03 - Swap Two Numbers.
Objective: To swap two numbers using a temporary variable.
============================================================ 
*/


#include <stdio.h>
int main(){
    
    int number1, number2, temp;

    // Input two numbers from user.
    printf("\nEnter first number: ");
    scanf("%d",&number1);
    printf("Enter second number: ");
    scanf("%d",&number2);

    // Swapping logic
    temp = number1;
    number1 = number2;
    number2 = temp;

    // Output after swapping.
    printf("\nAfter swapping:\n");
    printf("\nFirst number: %d", number1);
    printf("\nSecond number: %d", number2);
    return 0;

}