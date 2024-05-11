#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    vector<int> mugs(n);
    int totalVolume = 0;

    for (int i = 0; i < n; ++i) {
        cin >> mugs[i];
        totalVolume += mugs[i];
    }

    if (totalVolume + b > n || b != 0 || totalVolume % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    double equalVolume = (totalVolume + b) / static_cast<double>(n);

    cout << fixed << setprecision(6);

    for (int i = 0; i < n; ++i) {
        double neededVolume = equalVolume - mugs[i];
        cout << neededVolume << endl;
    }

    return 0;
}
