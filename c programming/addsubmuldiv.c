#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    
    if (num2 != 0) {
        printf("Remainder: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Error: Cannot find remainder when the second number is zero.\n");
    }

    return 0;
}