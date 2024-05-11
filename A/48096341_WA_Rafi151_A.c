#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of good matrix elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  // Diagonal elements
        sum += matrix[i][n - i - 1];  // Anti-diagonal elements
    }

    if (n % 2 == 1) {
        // Subtract the double-counted middle element if the matrix has an odd size
        sum -= matrix[n / 2][n / 2];
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}
