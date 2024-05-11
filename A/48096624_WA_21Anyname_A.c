#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

   
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

   
    int total_sum = 0;

 
    for (int i = 0; i < n; i++) {
        total_sum += matrix[i][i];
        total_sum += matrix[i][n - i - 1];
    }


    for (int i = 0; i < n; i++) {
        total_sum += matrix[n / 2][i];
        total_sum += matrix[i][n / 2];
    }


    printf("%d\n", total_sum);

    return 0;
}
