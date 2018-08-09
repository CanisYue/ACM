#include <iostream>
#include <cstdio>
#include <algorithm>
int c=10000;
using namespace std;

long long int matrix[10000][10000];
int main()
{
    int h;
    int t1, t2;
    int m, n;
    cin>>h;
    for(int i=0; i<=10000; i++){
        for(int j=0; j<=10000; j++){
            if(i!=j){matrix[i][j]=10000000;}
        }
    }
    for(int times=0; times<h; times++){
        cin>>n>>m;
        for(int i=0; i<m; i++){
            cin>>t1>>t2;
            cin>>matrix[t1][t2];
        }
        for(int k=1; k<=n; k++){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    if(matrix[i][k]+matrix[k][j]<matrix[i][j])
                        matrix[i][j]=matrix[i][k]+matrix[k][j];

                }
            }
        }
        printf("%d\n", matrix[1][n]);

    }
    return 0;
}
