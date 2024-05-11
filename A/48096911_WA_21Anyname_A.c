#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

   
    int matrix[101][101];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];                
        sum += matrix[i][n - 1 - i];        
        sum += matrix[n / 2][i];           
        sum += matrix[i][n / 2];            
    }

   
    sum -= matrix[n / 2][n / 2];

 
    printf("%d\n", sum);

    return 0;
}
