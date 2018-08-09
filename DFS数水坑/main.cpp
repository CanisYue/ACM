#include <iostream>
#include <cstdio>
using namespace std;

const int MAX=1000;
int n,m;
char pond[MAX][MAX];
int step[8][2]={{0,1},{1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1}};

void dfs(int x, int y)
{
    pond[x][y]='.';
    for(int dx=-1; dx<=1; dx++){
        for(int dy=-1; dy<=1; dy++){
        int nx=x+dx, ny=y+dy;

        if(nx>0&&nx<n+1&&ny>0&&ny<m+1&&pond[nx][ny]=='W'){
            dfs(nx, ny);
        }
        }
    }
    return;

}
int main()
{
    //freopen("input.txt", "r", stdin);
    while(~scanf("%d %d", &n, &m)){
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                cin>>pond[i][j];

            }
        }
        int ans=0;
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(pond[i][j]=='W'){
                    dfs(i,j);
               /* for(int i=1; i<n+1; i++){
                    for(int j=1; j<m+1; j++)
                        printf("%d ", pond[i][j]);
                    printf("\n");
                }
                printf("\n");*/
                    ans+=1;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
