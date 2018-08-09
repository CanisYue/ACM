#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int N,M;
int box[100];
int m, n;

bool dfs(int i, int sum)
{
    if(i==n)return(sum==m);
    if(dfs(i+1, sum)){
        printf("%d ", box[i]);
        return true;
    }
    if(dfs(i+1, sum+box[i+1])){
        printf("%d ", box[i+1]);
        return true;
    }
    return false;
}
int main()
{
    while(true){
        memset(box, 0, sizeof(box));
        cin>>m>>n;
        for(int i=1; i<n+1; i++){
            cin>>box[i];
        }
        int i=dfs(0, 0);
        if(i)cout<<"TRUE\n";
        else cout<<"FALSE\n";
    }
}
