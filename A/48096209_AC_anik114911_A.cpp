#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int sum = 0,mr,mc;
    mr = (n / 2);
    mc = (n / 2);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                sum += a[i][j];
            }
            else if(i+j == n-1){
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