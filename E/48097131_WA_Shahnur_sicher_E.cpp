#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,sum=0;
    cin>>n>>b;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int tsum=sum+b;
    float equal=tsum/n;
    int m=*max_element(a,a+n);
    if(equal<m)
    {
        cout<<-1<<endl;
    }
    else
    {
    for(int i=0;i<n;i++)
    {
        cout<<fixed<<setprecision(6)<<equal-a[i]<<endl;
    }
    }

    return 0;
}