
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Loop to extract each digit and check if it's even
    while (num != 0) {
        digit = num % 10;  // Get the last digit
        
        if (digit % 2 == 0) {  // Check if the digit is even
            sum += digit;  // Add the even digit to the sum
        }
        
        num /= 10;  // Remove the last digit from the number
    }
    
    // Output the sum of even digits
    printf("Sum of even digits: %d\n", sum);
    
    return 0;
}