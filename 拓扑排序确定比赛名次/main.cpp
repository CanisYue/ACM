#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const int MAX=10000000;
int ans[600][600];
int degree[510];
int que[510];
int a,b;
int n,m;

void topo()
{
    int top,k=0;
    for(int j=0; j<n; j++){
        for(int i=1; i<=n; i++){
            if(degree[i]==0){
                top=i;
                break;
            }
        }
        que[k++]=top;
        degree[top]=-1;
        for(int i=1; i<=n; i++){
            if(ans[top][i])
                degree[i]--;
        }
    }
    for(int i=0; i<k-1; i++)
        printf("%d ", que[i]);
    printf("%d\n", que[n-1]);
}
int main()
{
    while(~scanf("%d %d", &n, &m)){
        memset(degree, 0, sizeof(degree));
        memset(ans, 0, sizeof(ans));
        for(int l=0; l<m; l++){
            scanf("%d%d", &a, &b);
            if(ans[a][b]==0){
                ans[a][b]=1;
                degree[b]++;
            }
        }
        topo();
    }
    return 0;
}
