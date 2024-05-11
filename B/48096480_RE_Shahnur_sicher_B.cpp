#include<iostream>
using namespace std;
int main ()
{
    int n,sum=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        int b=0,c=n,d=(n+1)/2;
        int sub=a[b][b]+a[b][c]+a[b][d]+a[d][b];
        sum+=sub;
    }
    cout<<sum-3<<endl;
    
    return 0;
}