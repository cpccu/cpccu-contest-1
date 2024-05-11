#include <stdio.h>

int main() {
    // Reading the input value n
    int n;
    scanf("%d", &n);

    // Initializing the sum variable
    int sum = 0;

    // Reading the matrix and calculating the sum of good matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int element;
            scanf("%d", &element);

            // Checking if the element is on the main diagonal or anti-diagonal
            if (i == j || i + j == n - 1) {
                sum += element;
            }
        }
    }

    // Printing the sum
    printf("%d\n", sum);

    return 0;
}
