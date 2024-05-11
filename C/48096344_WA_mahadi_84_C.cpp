#include <iostream>
#include <cmath>

using namespace std;

int max_game_result(int n) {
    int max_result = 0;

    for (int a = 2; a <= sqrt(n); ++a) {
    
        if (n % a == 0) {
            int b = n / a;
            int result = (a + 1) * (b + 1) - a - b;
            max_result = max(max_result, result);
        }
    }

    return max_result;
}

int main() {
    int n;
    cin >> n;
    cout << max_game_result(n) << endl;

    return 0;
}
