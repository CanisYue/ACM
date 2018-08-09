#include <iostream>
#include <queue>

const int MAX=15;
const int INF=1000000;
char maze1[MAX][MAX];
char maze2[MAX][MAX];
int d1[MAX][MAX];
int d2[MAX][MAX];
char maze[2][MAX][MAX];
int d[2][MAX][MAX];

using namespace std;
int n, m, t;
int sx=0, sy=0, gx, gy, level=0;
struct Node
{
    int x,y,lev;
};
queue<Node> que;
int step[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

int bfs()
{
    for(int i=0; i<n; i++){
        scanf("%s", maze[0][i]);
    }
    getchar();
    for(int i=0; i<n; i++)
        scanf("%s", maze[1][i]);
    for(int i=0; i<2; i++){
        for(int j=0; j<n; i++){
            for(int k=0; k<m; k++){
                d[i][j][k]=INF;
                if(maze[i][j][k]=='P'){
                    level=i, gx=i, gy=j;
                }
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<n; i++){
            for(int k=0; k<m; k++){
                printf("%c", maze[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    Node head={sx,sy,0};
    que.push(head);
    while(que.size()){
        head=que.front();que.pop();
        if((head.lev==level)&&head.x==gx&&head.y==gy){
            return d[head.lev][head.x][head.y];
        }
        for(int i=0; i<4; i++){
            int dx=head.x+step[i][0], dy=head.y+step[i][1];
            int dlevel=head.lev;
            if(dx>=0&&dx<n&&dy>=0&&dy<m&&d[level][dx][dy]==INF&&maze[level][dx][dy]!='*'){
                if(maze[level][dx][dy]=='#'){
                    dlevel=!head.lev;
                    if(d[dlevel][dx][dy]!=INF||maze[dlevel][dx][dy]=='*')
                        continue;
                }
                d[dlevel][dx][dy]=d[level][head.x][head.y]+1;
                head={dx,dy,dlevel};
                que.push(head);
            }
        }
    }
    //return false;
}
int main()
{
    int a;
    cin>>a;
    for(int h=0; h<a; h++){
        cin>>n>>m>>t;
        //int ans=bfs();
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                cin>>maze[i][j][k];
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<n; i++){
            for(int k=0; k<m; k++){
                d[i][j][k]=INF;
                if(maze[i][j][k]=='P'){
                    level=i, gx=i, gy=j;
                }
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<n; i++){
            for(int k=0; k<m; k++){
                printf("%c", maze[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
        /*if(ans!=INF&&ans<=t){
            printf("YES\n");
        }
        else
            printf("NO\n");*/
    }
    return 0;
}
