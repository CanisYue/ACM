#include <iostream>
#include <cstdio>
using namespace std;

int a[51][51]; int book[51][51];
int n, m, p, q;
int mini=999999;
int next[4][2]={{1,0},{0,1},{0,-1},{-1,0}};
void dfs(int x, int y, int step)
{
    int tx, ty;
    if(x==p&&y==q){
        if(step<mini)
            mini=step;

        return;
    }
    for(int i=0; i<=3; i++){
        tx=x+next[i][0];
        ty=y+next[i][1];

        if(tx<1||ty<1||tx>m||ty>n){
            continue;
        }
        if(book[tx][ty]==0&&a[tx][ty]==0){
            book[tx][ty]=1;
            dfs(tx, ty, step+1);
            book[tx][ty]=0;
        }


    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    int startx, starty;
    scanf("%d%d", &m, &n);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d%d%d%d", &startx, &starty, &p, &q);
    dfs(startx, starty, 0);
    printf("%d", mini);
    return 0;
}
