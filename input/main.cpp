#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<algorithm>
using namespace std;

int line[2010][2010];
int dfs(int x,int num)
{
    int i,j;
    num++;
    for(i=0;i<=2000;i++){
        if(line[x][i]){
            return dfs(i,num);
            //dfs(i, num);
        }
    }
    return num;
}
int main()
{
    int n;
    int i,j,a,b;
    freopen("input.txt", "r", stdin);
    while(scanf("%d",&n)!=EOF)
    {
        memset(line,0,sizeof(line));
        for(i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            line[a][b]=1;
        }
        a=dfs(1,0);
        b=dfs(2,0);
        if(a<b){
            printf("You are my younger\n");
        }else if(a==b){
            printf("You are my brother\n");
        }else{
            printf("You are my elder\n");
        }
    }
    return 0;
}
