#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0) 
        return 1;
    else 
        return n * factorial(n - 1);
}

int main() {
    int number;
    
    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the input is valid
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %llu\n", number, factorial(number));
    }
    
    return 0;
}
