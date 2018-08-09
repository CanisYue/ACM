#include <iostream>
#include <string.h>
using namespace std;
int m, n;
int box[105];
bool dfs(int i, int sum)
{
    printf("i:%d sum:%d\n", i, sum);
    if(i==n) return sum==m;
    if(dfs(i+1, sum)){
        //printf("%d ", box[i]);
        //printf("0");
        return true;
    }
    if (dfs(i+1, sum+box[i])){
        //printf("%d ", box[i]);
        return true;
    }
    return false;
}
int main()
{
    while(true){
        memset(box, 0, sizeof(box));
        cin>>m>>n;
        for(int i=0; i<n; i++){
            cin>>box[i];
        }
        int i=dfs(0, 0);
        if(i)cout<<"TRUE\n";
        else cout<<"FALSE\n";
    }
}
