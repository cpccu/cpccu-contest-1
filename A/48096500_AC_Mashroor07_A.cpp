#include <iostream>
int main(){
    int n;
    std::cin>>n;
    long total=0;
    for (int row=0;row<n;row++){
        for (int col=0;col<n;col++){
            int temp;
            std::cin>>temp;
            if (row==col || row==n-1-col || row==(n-1)/2 || col==(n-1)/2){
                total+=temp;
            }
        }
    }
    std::cout<<total<<std::endl;
    return 0;
}
