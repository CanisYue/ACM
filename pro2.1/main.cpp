#include<stdio.h>
#include<vector>

using namespace std;
float init[100][3];
int tru[100][2][3];
int box[100], ans;
int main(void){
    int n;
    while(scanf("%d", &n)){
        vector<int> answers;
        for(int i = 0; i< n; i++){
            scanf("%f", &init[i][0]);
            scanf("%f", &init[i][1]);
            scanf("%f", &init[i][2]);
            printf("init %f %f\n", init[i][0], init[i][1]);
        }
        for(int i = 0; i<n; i++){
            tru[i][0] = (int)(init[i][0]*1000000);
            tru[i][1] = (int)(init[i][1]*1000000);
            tru[i][2] = (int)(init[i][2]);
            printf("tru %d %d\n", tru[i][0], tru[i][0]);
        }
        for(int i = 0; i<10000000; i++){
            for(int j = 0; j<10000000; j++){
                for(int k = 0; k<n; k++){
                    if((tru[k][0]-i) * (tru[k][0]-i)+(tru[k][1]-j) * (tru[k][1]-j)<1000000){
                        ans+=init[i][2];
                    }
                }answers.push_back(init[i][2]);
            }
        }int temp = 0;
        for(it=answers.begin();it!=answers.end();it++){
            if(answers[it]>temp){temp = answers[it];}
        }printf("%d\n", temp);
    }
}
