#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char box1[1000000];
char box2[1000000];
int wins[10000000];

int main()
{
    //freopen("input.txt", "r", stdin);
    int n,m;
    char c;
    int win=0;
    int len1, len2, len3;
    while(~scanf("%d%d", &n, &m)){
        int ans=0;
        memset(box1, 0, sizeof(box1));
        memset(box1, 0, sizeof(box1));
        //memset(wins, 0, sizeof(wins));
        scanf("%s", box1);
        scanf("%s", box2);

        for(int i=0; i<n; i++){
            for(int j=i; j<m+i; j++){
                if(j==n){break;}
                c=(int)((box1[j]-box2[j-i]));
                if(c==-3||c==2||c==1){
                    win++;
                }
            }
            if(win>ans){ans=win;}
            win=0;
        }
        printf("%d\n", ans);
    }
    return 0;
}
