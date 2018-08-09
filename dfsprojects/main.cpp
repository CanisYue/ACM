#include <cstdio>

int a[10], b[10];
int ans, n;
int dfs(int step)
{
    if(step==n+1){
        for(int i=0; i<n; i++)
            printf("%d", a[i]);
        printf("\n");
        return 0;
    }

    for(int i=1; i<10; i++){
        if(b[i])
    }
}

int main(void)
{
    scanf("%d", &n);
    dfs(1);

    return 0;
}
