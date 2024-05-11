#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,b;
    cin>>n>>b;

    vector<int>a(n);

    for(int i=0; i<n;++i)
    {
        cin>>a[i];
    }

    int sum_a=0;
    int max_a=*max_element(a.begin(), a.end());

    for(int i=0;i<n;++i)
    {
        sum_a +=a[i];
    }

    double x=static_cast<double>(b+sum_a)/n;

    if(x<max_a)
    {
        cout <<-1<<endl;
    }
    else{
        for(int i=0;i<n;++i)
        {
            cout<<fixed<<setprecision(6)<<x-a[i]<<endl;
        }
    }

    return 0;
}
