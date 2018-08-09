
#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;

const int INF=1000000;
typedef pair<int ,int >P;
int N;
char maze[1005][1005];
int d[1005][1005];
int sx,sy;
int gx,gy;
queue<P> que;

int step[4][2]={{1,0},{0,1}, {-1,0},{0,-1}};

int bfs(){

    /*for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                printf("%c", maze[i][j]);
            }
            printf("\n");
            }*/

    while(que.size()){
        P p=que.front();que.pop();
        if(p.first==gx &&p.second==gy) break;
        for(int i=0;i<4;i++){
            int nx=p.first+step[i][0],ny=p.second+step[i][1];
            if(0<=nx&&nx<N&&0<=ny&&ny<N&&maze[nx][ny]!='#'&&d[nx][ny]==INF){
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    return d[gx][gy];
}



int main(){
    while(~scanf("%d",&N)){
    for(int i=0;i<N;i++){
        scanf("%s",maze[i]);
    }
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++) {
        if(maze[i][j]=='S') sx=i,sy=j;
        if(maze[i][j]=='E') gx=i,gy=j;
            d[i][j]=INF;
    }
    que.push(P(sx,sy));
    d[sx][sy]=0;
    int res=bfs();
    if(res==INF) printf("-1\n");
    else
    printf("%d\n",res);
    }
   return 0;
}
