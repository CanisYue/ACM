#include <iostream>
#include <queue>
#include <algorithm>

const int MAX = 1000;
const int INF = 1000000000;

using namespace std;
char maze[MAX][MAX];
int d[MAX][MAX];
typedef pair<int, int> P;
int n,m;
queue<P> que;
int step[8][2]={{0,1},{1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1}};


void bfs()
{
    while(que.size()){
        P p = que.front(); que.pop();
        for(int i=0; i<8; i++){
            int dx=p.first+step[i][0], dy=p.second+step[i][1];
            if(dx>0&&dx<n+1&&dy>0&&dy<m+1&&maze[dx][dy]=='W'){
                maze[dx][dy]='.';
                que.push(P(dx,dy));
            }
        }

    }
     /*for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++)
                printf("%c ", maze[i][j]);
            printf("\n");
        }
        printf("\n");*/
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    while(~scanf("%d %d", &n, &m)){
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                cin>>maze[i][j];
                d[i][j]=INF;
            }
        }
        int ans=0;
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(maze[i][j]=='W'){
                    que.push(P(i,j));
                    bfs();
                    ans+=1;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
