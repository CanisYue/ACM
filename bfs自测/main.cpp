#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>

using namespace std;
const int MAX = 2000;
const int INF = 1000000000;
int n,m,k;
typedef pair<int, int>P;
int d[MAX][MAX];
queue<P> que;
int step[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};

void bfs()
{
    while(que.size()){
        P p = que.front(); que.pop();

        for(int i=0; i<4; i++){
            int nx=p.first+step[i][0], ny=p.second+step[i][1];
            if(nx>0&&nx<n+1&&ny>0&&ny<m+1&&d[nx][ny]==INF){
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    return;
}
int main()
{
    while(~scanf("%d%d%d", &n, &m, &k)){
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                d[i][j]=INF;
            }
        }
        for(int i=0; i<k; i++){
            int a,b;
            cin>>a>>b;
            que.push(P(a,b));
            d[a][b]=0;
        }
        bfs();
        int Max=0;
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(d[i][j]!=INF)
                    Max=max(d[i][j], Max);
            }
        }
        int flag=0;
        for(int i=1; i<n+1; i++){
            if(flag) break;
            for(int j=1; j<m+1; j++){
                if(Max == d[i][j]){
                    printf("%d %d\n", i, j);
                    flag=1;
                    break;
                }
            }
        }
    }
    return 0;
}
