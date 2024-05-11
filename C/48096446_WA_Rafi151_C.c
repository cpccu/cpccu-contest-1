#include <stdio.h>

// Function to find the largest divisor of n (excluding n itself)
long long largestDivisor(long long n) {
    for (long long i = n / 2; i >= 2; i--) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    long long n;
    scanf("%lld", &n);

    // Find the largest divisor
    long long divisor = largestDivisor(n);

    // Calculate the maximum possible result
    long long result = (divisor * 2) - 1;

    // Output the result
    printf("%lld\n", result);

    return 0;
}
