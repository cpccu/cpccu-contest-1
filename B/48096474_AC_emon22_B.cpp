#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int matrix[n][n];

  
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    int sum = 0;

    for (int i = 0; i < n; ++i)
        sum += matrix[i][i];


    for (int i = 0; i < n; ++i)
        sum += matrix[i][n-1 - i];

    int middleRow = n / 2;
    for (int j = 0; j < n; ++j)
        sum += matrix[middleRow][j];


    int middleColumn = n / 2;
    for (int i = 0; i < n; ++i){
        sum += matrix[i][middleColumn];}
  
      int l= 3* matrix[n/2][n/2];
   int s=sum- l;

    cout << s << endl;

    return 0;
}
