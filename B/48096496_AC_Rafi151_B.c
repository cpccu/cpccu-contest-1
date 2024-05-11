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
        sum += matrix[i][i];  // Elements of the main diagonal
        sum += matrix[i][n - 1 - i];  // Elements of the secondary diagonal
        sum += matrix[n / 2][i];  // Elements of the middle row
        sum += matrix[i][n / 2];  // Elements of the middle column
    }

    // Adjust for double counting the middle element
    sum -= 3 * matrix[n / 2][n / 2];

    // Output the result
    printf("%d\n", sum);

    return 0;
}
