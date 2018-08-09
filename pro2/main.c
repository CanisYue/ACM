#include<stdio.h>
int answer[1000000000000]
float init[100][3];
int tru[100][2][3];
int box[100], ans;
int main(void){
    int num;
    while(scanf("%d", &n)){
        for(int i = 0; i< n; i++){
            scanf("%d", &init[i][0]);
            scanf("%d", &init[i][1]);
            scanf("%d", &init[i][2]);
            printf("init %d %d\n", init[i][0], init[i][1]);
        }
        for(int i = 0; i<n; i++){
            tru[i][0] = init[i][0]*1000000;
            tru[i][1] = init[i][1]*1000000;
            tru[i][2] = init[i][2];
            printf("tru %d %d\n", tru[i][0], tru[i][0]);
        }
        for(int i = 0; i<10000000; i++){
            for(int j = 0; j<10000000; j++){
                for(int k = 0; k<n; k++){
                    if((tru[k][0]-i)*(tru[k][0]-i)+(tru[k][1]-j)*(tru[k][1]-j)<1000000){
                        ans+=init[i][2];
                }
                }
            }
        }
    }
}
