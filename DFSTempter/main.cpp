#include <iostream>

const int MAX=30;
const int INF=1000000000;

using namespace std;

char maze[MAX][MAX];
int d[MAX][MAX];
int n, m, t;
int step[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

bool dfs(int x, int y, int time)
{
    if(time==t){
        //printf("Yes");
        return d[x][y]==1;
    }
    maze[x][y]='X';
   /* for(int i=1; i<n+1; i++){
                for(int j=1; j<m+1; j++){
                printf("%c", maze[i][j]);
                }printf("\n");
            }*/
    for(int i=0; i<4; i++){
        int dx=x+step[i][0], dy=y+step[i][1], dtime=time+1;
        if(dx>0&&dx<n+1&&dy>0&&dy<m+1&&dtime<=t&&maze[dx][dy]!='X'){
            //printf("%d %d %d\n", dx, dy, dtime);

            if(dfs(dx, dy, dtime))
                return true;
            maze[dx][dy]='.';
        }
    }
    return false;
}

int main()
{
    while(~scanf("%d %d %d", &n, &m, &t)){
        int time=0;
        int sx, sy;
        int gx, gy;
        if(n==0&&m==0&&t==0){break;}
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                cin>>maze[i][j];
                d[i][j]=0;
                if(maze[i][j]=='S'){
                    sx=i;
                    sy=j;
                }
                if(maze[i][j]=='D'){
                    d[i][j]=1;
                    gx=i, gy=j;
                }
            }
        }
        if((gx+gy+sx+sy+t)%2!=0){
            //printf("%d %d %d %d", gx, gy, sx, sy);
            printf("NO\n");
        }
        /*for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                printf("%c", maze[i][j]);
            }
            printf("\n");
        }*/
        else if(dfs(sx, sy, time)){
            printf("YES\n");
        }
        else
            printf("NO\n");

    }
    return 0;
}
