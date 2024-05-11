#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long result = 0;

    // Factorize the number and calculate the sum of factors
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            result += n;
            n /= i;
        }
    }

    // If n is still greater than 1, add it to the result
    if (n > 1) {
        result += n;
    }

    printf("%lld\n", result);

    return 0;
}
