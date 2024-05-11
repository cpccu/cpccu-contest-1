#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    // Calculate the maximum possible result
    long long result = (n / 2) + 1;

    // Output the result
    printf("%lld\n", result);

    return 0;
}
