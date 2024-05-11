#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of good matrix elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  // Adding elements on the main diagonal
        sum += matrix[i][n - 1 - i];  // Adding elements on the opposite diagonal
    }

    if (n % 2 == 1) {
        // If n is odd, subtract the middle element to avoid counting it twice
        sum -= matrix[n / 2][n / 2];
    }

    // Output the result
    printf("%d\n", sum);

    return 0;
}
