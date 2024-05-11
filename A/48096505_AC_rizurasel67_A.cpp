#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int matrix[n][n];
    for(int i=0;i<n;++i)
        for(int j=0; j<n;++j)
            cin>>matrix[i][j];

    int sum=0;
    int middle=(n-1)/2;
    for(int i=0; i<n; ++i)
        sum += matrix[i][i]+matrix[i][n-1-i];

    for(int i=0; i<n; ++i)
        sum += matrix[middle][i] + matrix[i][middle];

    sum -= 3*matrix[middle][middle]; 

    cout<<sum<<endl;

    return 0;
}
