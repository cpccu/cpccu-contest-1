#include <stdio.h>

int max_game_result(int n) {
    int max_result = 0;

    for (int a = 2; a * a <= n; a++) {
        if (n % a == 0) {
            while (n % a == 0) {
                n /= a;
            }
            max_result = (max_result > a) ? max_result : a;
        }
    }

    if (n > 1) {
        max_result = (max_result > n) ? max_result : n;
    }

    return max_result + n;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = max_game_result(n);
    printf("%d\n", result);

    return 0;
}
