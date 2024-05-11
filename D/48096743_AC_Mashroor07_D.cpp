#include <iostream>
#include <cmath>
long long findMaxResult(int n){
    long long result = 0;
    while (n%2==0){
        result+=n;
        n/=2;
    }

    for (int i=3;i<=sqrt(n);i+=2){
        while (n%i==0){
            result+=n;
            n/=i;
        }
    }

    if (n>1) {
        result+=n;
    }

    return result +1; 
}

int main(){
    int n;
    std::cin>>n;
    long long maxResult=findMaxResult(n);
    std::cout<<maxResult<<std::endl;
    return 0;
}
