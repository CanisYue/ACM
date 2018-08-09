#include <iostream>

const int MAX=20;
using namespace std;

int matrix[MAX];
int n,m;
int k;
int vis[MAX];

bool dfs(int sum, int time)
{
    //printf("%d %d\n", sum, time);
    if(sum==k){
        printf("True\n");
        return true;
    }
    for(int i=0; i<2; i++){
        int xtime=time+1;
        int xsum=sum+i*matrix[xtime];
        if(xtime<n+1){
            if(dfs(xsum, xtime))
                //printf("Ñ­»·%d", xtime);
                //printf(" %d ", matrix[xtime]);
                return true;
        }
    }
    printf("\n");
    return false;
    /*if(time==n)return sum==k;
    if(dfs(sum,time+1))return true;
    if(dfs(sum+matrix[time], time+1))return true;
    printf("\n");
    return false;*/

}
int main()
{
    while(~scanf("%d %d", &n, &k)){
        for(int i=0; i<n; i++){
            cin>>matrix[i];
            vis[i]=0;
        }
        if(!dfs(0,0)){
            printf("False\n");
        }
        else
            printf("True\n");
    }
    return 0;
}
