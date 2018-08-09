#include<stdio.h>

int box[10000000000];
int main(void){
    //freopen("input.txt", "r", stdin);
    int m, n;
    long long ans = 0;
    //printf("%d", 4%4);
    while(scanf("%d%d", &n, &m)==2){
        for(int i = 1; i<(n+1); i++){
            //printf("i %d m %d i%m %d\n",i, m, i%m);
            if(i%m!=0&&m%i!=0||i == 1){
                box[i] = i;
            }
            else{
                box[i] = 0;
            }//printf("box %d\n", box[i]);
        }
        for(int i = 1; i<(n+1); i++){
            if(box[i]!=0){
                ans += (box[i]*box[i])%1000000007+box[i]%1000000007;
            }
            //printf("ans %d\n",ans);
        }
        ans = ans%1000000007;
        printf("%d\n", ans);
        ans = 0;
    }
    //printf("%d\n", ans);
    return 0;
}
