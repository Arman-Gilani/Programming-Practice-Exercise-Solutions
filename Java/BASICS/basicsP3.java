/*
============================================================
Program Title: BASICS - 03 - Swap Two Numbers
Objective: To swap two numbers using a temporary variable
============================================================
*/

import java.util.Scanner;

public class basicsP3{
    public static void main(String[] args) {
        
        int number1, number2, temp;

        // Create Scanner object for input
        Scanner s = new Scanner(System.in);

        // Input two numbers from user
        System.out.println("Enter first number: ");
        number1 = s.nextInt();
        System.out.println("Enter second number: ");
        number2 = s.nextInt();
        
        // Swapping Logic
        temp = number1;
        number1 = number2;
        number2 = temp;

        // Output after swapping
        System.out.println("\nAfter swapping:");
        System.out.println("First number: "+number1);
        System.out.println("Second number: "+number2);

    }
}