#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
const int INF = 1000000000;
const int MAX=2000;
int matrix[MAX][MAX];
int m, n, k;
int ans[MAX][2];
int ax=0;
int step[4][2]={{1,0}, {0,1},{-1,0},{0,-1}};
int d[MAX][MAX];

typedef pair<int, int> P;
queue<P> que;


void bfs()
{
    while(que.size()){
        P p = que.front(); que.pop();
        for(int i=0;i<4;i++){
            int nx = p.first+step[i][0],ny = p.second+step[i][1];
            if(0<nx&&nx<m+1&&0<ny&&ny<m+1&&d[nx][ny]==INF){
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second]+1;
            }
        }
    }
    return;
}
int main()
{
    while(~scanf("%d %d %d", &n, &m, &k)){
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                d[i][j]=INF;
            }
        }
        int a,b;
        for(int i=1; i<=k; i++){
            cin>>a>>b;
            que.push(P(a,b));
            d[a][b]=0;
        }
        bfs();
        int flag=0;
        int Max = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
              //  printf("%d ", d[i][j]);
                if(d[i][j]!=INF)
                    Max = max(Max, d[i][j]);
            }
        }

        for(int i=1; i<=n; i++){
            if(flag) break;
            for(int j=1; j<=m; j++){
                if(d[i][j]==Max){
                    printf("%d %d\n", i, j);
                    flag=1;
                    break;
                }
            }
        }
    }
    return 0;
}
