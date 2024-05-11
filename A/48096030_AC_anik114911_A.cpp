#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    int sum = 0,mr,mc;
    mr = (n / 2) + 1;
    mc = (n / 2) + 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == j){
                sum += a[i][j];
            }
            else if((i+j) - 1 == n){
                sum += a[i][j];
            }
            else if(i == mr){
                sum += a[i][j];
            }
            else if(j == mc){
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;

    return 0;
}