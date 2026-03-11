/* Q9 :*/
#include <stdio.h>

// Function to find the sum of digits of a number
int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

// Function to find the single-digit recursive sum
int recursiveSum(int n) {
    // Calculate the sum of current digits
    int sum = sumDigits(n);
    
    // Base Case: If the sum is a single digit (0-9), we are done
    if (sum < 10) {
        return sum;
    }
    
    // Recursive Step: If sum >= 10, call the function again with the new sum
    printf("Intermediate sum: %d\n", sum); // To show the steps like in the prompt
    return recursiveSum(sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = -num; // Handle negative numbers

    int result = recursiveSum(num);
    printf("Final recursive sum: %d\n", result);

    return 0;
}
