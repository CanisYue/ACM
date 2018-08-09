#include <iostream>
#include <queue>
#include <algorithm>
const int MAX=30;
const int INF=1000000000;
using namespace std;

int n,m;
char maze[MAX][MAX];
int d[MAX][MAX];
int sx, sy;
typedef pair<int, int>P;
queue<P> que;
int step[4][2]={{1,0},{0,1}, {-1,0},{0,-1}};
int ans=1;

int bfs()
{
    while(que.size()){
        P p=que.front(); que.pop();
        //printf("F");
        for(int i=0; i<4; i++){
            //printf("dsf");
            int dx=p.first+step[i][0], dy=p.second+step[i][1];
            if(maze[dx][dy]=='.'){
                que.push(P(dx, dy));
                maze[dx][dy]='@';
                ans+=1;
               // printf("%d ik", ans);
            }
        }
    }
    return ans;
}
int main()
{
    while(~scanf("%d %d", &m, &n)){
        if(m==0&&n==0) break;
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                cin>>maze[i][j];
                if(maze[i][j]=='@'){
                    sx=i, sy=j;
                }
            }
        }
        //printf("%d %d ", sx, sy);
        que.push(P(sx,sy));
        int result=bfs();
        printf("%d\n", result);
        ans=1;
    }
}
