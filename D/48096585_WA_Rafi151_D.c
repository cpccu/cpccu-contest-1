#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    // Find the largest proper divisor
    long long a = n - 1;

    // Calculate the maximum possible result
    long long result = (n / a) + a;

    // Output the result
    printf("%lld\n", result);

    return 0;
}
