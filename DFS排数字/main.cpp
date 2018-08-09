#include <iostream>

const int MAX=1000;


using namespace std;

int n,m;
int box[MAX];
int vis[MAX];

void dfs(int num, int time, int y)
{
    if(y==m){
        for(int i=n; i>=1; i--){
            if(vis[i]!=0)
                printf("%d ", vis[i]);
        }
         printf("\n");
        return;

    }
    for(int i=0; i<2; i++){
        int dtime=time+1, dy=i+y, dnum=dy*box[dtime];
        if(dtime<n){
            vis[dtime]=dtime*i;
            dfs(dnum, dy, dtime);
        }

    }
    //return;
}
int main()
{
    while(~scanf("%d %d", &n, &m)){
        for(int i=1; i<=n; i++){
            box[i]=i;
        }
        dfs(0, 0, 0);
    }
    return 0;
}
