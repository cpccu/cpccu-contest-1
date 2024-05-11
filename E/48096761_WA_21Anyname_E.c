#include <stdio.h>

int main() {
    int n, b;
    scanf("%d %d", &n, &b);

    int volumes[n];
    int total_volume = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &volumes[i]);
        total_volume += volumes[i];
    }

    if (total_volume + b < n) {
        printf("-1\n");
        return 0;
    }

    double target_volume = (total_volume + b) / (double)n;

    for (int i = 0; i < n; i++) {
        double additional_volume = target_volume - volumes[i];
        printf("%.6lf\n", additional_volume);
    }

    return 0;
}
