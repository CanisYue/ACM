#include <iostream>
#include <cstdio>

using namespace std;

int ans[10];
void dfs(int start,int has,int n,int m)
{
    if(has==m)
    {
        for(int i=0;i<m;i++)
        printf("%d ",ans[i]);
        printf("\n");
        return;
    }
    for(int i=start+1;i+m<=n+has+1;i++)
    {
    ans[has]=i;
    dfs(i,has+1,n,m);
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    dfs(0,0,n,m);
}
