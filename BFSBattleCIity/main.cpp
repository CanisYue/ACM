#include <iostream>
#include <queue>
#include <cstdio>

const int MAX=305;
const int INF=1000000;

using namespace std;
int n,m;
char maze[MAX][MAX];
int d[MAX][MAX];
int sx, sy, gx, gy;
//typedef pair<int, int>P;
int step[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

struct Node
{
    int x,y,s;
    friend bool operator<(Node a, Node b)
    {
        return a.s>b.s;
    }
};



int bfs()
{
    //queue<P> que;
    priority_queue<Node> que;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            d[i][j]=INF;
            if(maze[i][j]=='Y'){
                sx=i, sy=j;
                d[i][j]=0;
            }
            else if(maze[i][j]=='T'){
                gx=i, gy=j;
                //d[i][j]=0;
            }
        }
    }


    Node head={sx,sy,1};
    que.push(head);

    while(!que.empty()){
        //printf("%d %d", que.top().x, que.top().y);
        Node node = que.top();; que.pop();
        //maze[][j]='S';

        if(node.x==gx&&node.y==gy)return node.s;

        for(int i=0; i<4; i++){
            int dx=node.x+step[i][0], dy=node.y+step[i][1];
            if(dx>=0&&dy>=0&&dx<n&&dy<m&&maze[dx][dy]!='S'&&d[dx][dy]==INF&&maze[dx][dy]!='R'){
                //printf("D");
                d[dx][dy]=0;
                int temp=0;
                //que.push(P(dx, dy));
                if(maze[dx][dy]=='B'){
                    temp=2;
                }
                else if(maze[dx][dy]=='E')
                    temp=1;
                Node tmp={dx,dy,temp+node.s};
                que.push(tmp);
            }
           // if(maze[dx][dy]=='T')break;
        }
    }
    return -1;
}

int main()
{
   while(~scanf("%d %d", &n, &m)){
        if(n==0&&m==0){break;}
        for(int i=0; i<n; i++){
            scanf("%s", maze[i]);
        }
        /*for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                printf("%c", maze[i][j]);
            printf("\n");
        }*/
        int ans=bfs();
        printf("%d\n", ans);

    }
    return 0;
}
