#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;

    long long result = 0;

    for (long long i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            result += n;
            n /= i;
        }
    }

    if (n > 1) {
        result += n;
    }

    cout << result+1 << std::endl;

    return 0;
}
