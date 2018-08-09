#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
int n, m;
int step[8][2]={{0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}, {-1,-1}, {-1,0}, {-1,1}};
char a[105][105];
void dfs(int x, int y)
{
    int dx=x;
    int dy=y;
    a[x][y]='.';
    //printf("%d %d\n", dx, dy);
    for(int i=0; i<8; i++){
            dx=x+step[i][0];
            dy=y+step[i][1];
            printf("X%d Y%d\n", dx, dy);
            printf("\n");
            if(dx>=1&&dx<n+1&&dy>=1&&dy<m+1&&a[dx][dy]=='W'){
                //printf("DX%d DY%d\n", dx, dy);
                dfs(dx, dy);
            }
    }
    return;
}
int main()
{
    freopen("input.txt", "r", stdin);
    while(~scanf("%d%d",&n,&m)){
        int ans=0;
        memset(a, 0, sizeof(a));
        char c;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                scanf("%c",&c);
                if(c=='\n')j--;
                else a[i][j]=c;
            }
        }
        ans=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(a[i][j]=='W'){
                    ans++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",ans);

    }
    return 0;
}
