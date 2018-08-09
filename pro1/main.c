#include<stdio.h>

int box[10000000000];
int main(void){
    int m, n;
    long long ans = 0;
    while(scanf("%d%d", &n, &m)==2){
        for(int i = 1; i<(n+1); i++){
            if(i%m!=0&&m%i!=0||i == 1){
                box[i] = i;
            }
            else{
                box[i] = 0;
            }
        }
        for(int i = 1; i<(n+1); i++){
            if(box[i]!=0){
                ans += (box[i]*box[i])%1000000007+box[i]%1000000007;
            }
        }
        ans = ans%1000000007;
        printf("%d\n", ans);
        ans = 0;
    }
    return 0;
}
