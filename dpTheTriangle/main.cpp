#include <iostream>

using namespace std;

int n,m;
int box[100][100];
int main()
{
    while(~scanf("%d", &n)){
        int t=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<t; j++){
                cin>>box[i];
            }
            t++
        }
        t=0;

        dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
        dp[i][j]=dp[i-1]
        dp[i][j]=dp[i-1][j-1]
    }
    return 0;
}
