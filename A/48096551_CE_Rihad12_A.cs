#include<stdio.h>

int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);

    int matrix[n][n];

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);

            if(i==j||i+j==n-1||i==n/2||j==n/2){
                sum+=matrix[i][j];
            }
        }
    }

    printf("%d\n",sum);
    return 0;
}