#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
int a[1000];
int ans[100];
int dfs(int i, int j, int n, int m, int sh){
    if(j>sh){
        ans[j]=i;
        sh=j;
    }
    if(i==n){
        return m==j;
    }
    if(dfs(i+1, j, n, m, sh)){
        return true;
    }
    if(dfs(i+1, j+1, n, m, sh)){
        printf("%d ", ans[j+1]);
        return true;
    }
    return false;
}

int main(){
    int n;
    int m;
    while(true){
        //cin>>n>>m;
        scanf("%d%d", &n, &m);
        memset(a, 0, sizeof(a));
        for(int i=1; i<n+1; i++){
            a[i]=i;
        }
        dfs(0, 0, n, m, 0);
    }
    return 0;
}
