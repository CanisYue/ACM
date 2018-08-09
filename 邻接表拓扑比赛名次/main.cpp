#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
const int MAX=600;

vector<int> G[MAX];

int n,m;
int a,b;
int indegree[600];
int ans[600];


int topo()
{
    int first;
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            if(indegree[i]==0){
                ans[k]=i;
                k++;
                vector<int>::iterator iter;
                for(iter=G[j].begin(); iter!=G[j].end(); iter++){
                    indegree[*iter]--;
                }
            }
        }
    }
    for(int i=0; i<n-1; i++){
        printf("%d ", ans[i]);
    }
    printf("%d\n", ans[n-1]);
}
int main()
{
    while(~scanf("%d %d", &n, &m)){
        memset(ans, 0, sizeof(ans));
        memset(indegree,0, sizeof(indegree));
        for(int i=0; i<m; i++){
            scanf("%d %d", &a, &b);
            G[a].push_back(b);
            indegree[b]++;
        }
        topo();
    }

    return 0;
}
