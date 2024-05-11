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
    int b=0,c=n-1,d=(n-1)/2,sub=0;
    for(int i=0;i<n;i++)
    {
        
        sub=a[b][b]+a[b][c]+a[b][d]+a[d][b];
        b++;
        c--;
        
        sum+=sub;
    }
    int p=(a[d][d])*3;
    cout<<sum-p<<endl;
    
    return 0;
}