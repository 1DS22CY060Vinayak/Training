#include <stdio.h>

int main() {
    int num1, num2, difference;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Subtract the second number from the first number
    difference = num1 - num2;

    // Print the result
    printf("Difference: %d\n", difference);

    return 0;
}
