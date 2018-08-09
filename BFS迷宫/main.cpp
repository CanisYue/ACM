#include <iostream>
#include <algorithm>
#include <queue>
#include <cstdio>
const int MAX = 1010;
const int INF = 100000000;
using namespace std;

int n, m;
typedef pair<int, int>P;
char maze[MAX][MAX];
int d[MAX][MAX];
int step[4][2]={{1,0},{0,1}, {-1,0},{0,-1}};
int gx, gy;

int bfs()
{
    queue<P> que;  //queue只能作为局部变量？？？？？？？？
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            d[i][j]=INF;
            if(maze[i][j]=='S'){
                que.push(P(i,j));
                    d[i][j]=0;
            }
            if(maze[i][j]=='E'){
                gx=i, gy=j;
            }
        }
    }
    while(que.size()){
        //printf("DF");
        P p = que.front(); que.pop();

        for(int i=0; i<4; i++){
            int dx=p.first+step[i][0], dy=p.second+step[i][1];
            if(dx>=0&&dx<n&&dy>=0&&dy<n&&d[dx][dy]==INF&&maze[dx][dy]!='#'){
                que.push(P(dx,dy));
                d[dx][dy]=d[p.first][p.second]+1;
                if(maze[dx][dy]=='E')break;
            }
        }
    }
    return d[gx][gy];
}
int main()
{
    while(~scanf("%d", &n)){
        for(int i=0; i<n; i++){
           scanf("%s", maze[i]);
        }
        int ans=bfs();
        if(ans==INF)
            printf("-1\n");
        else
            printf("%d\n", ans);
    }
    return 0;
}
