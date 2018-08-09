#include<stdio.h>
#include<string.h>>
int m;
int main(void){
    //freopen("input.txt", "r", stdin);
    //while(scanf("d"), &m){
    for(int r = 0; ;r++){
        //freopen("input.txt", "r", stdin);
        int  n;
        //scanf("%d", &m);
        if(m==0){break;}
        scanf("%d", &n);
        //printf("%d%d",m, n);
        char boxi[m][n+1];
        int box[m][n];
        memset(box, 0, sizeof(box));
        getchar();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < (n+1); j++){
                boxi[i][j] = getchar();
            }
        }
        //printf("\n");

        int Q = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(boxi[i][j] == '*'){
                    box[i][j] = -1;
                }
                if(((j>0)&&(boxi[i][j-1]=='*') || (i>0)&&(boxi[i-1][j]=='*') || !i || !j) && boxi[i][j]!='*'){
                    box[i][j] = Q;
                    Q+=1;
                }
            }
        }

        /*for(int i = 0; i < m; i++){
            for(int j = 0; j < (n); j++){
                printf("%5d", box[i][j]);

            }printf("\n");
        }*/
        printf("puzzle %d\n", r);
        printf("Across\n");
        int key = 0;
        int counter = 1;
        printf("%3d ", counter);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((key == 1) && (box[i][j] > 0)){
                    printf("\n");
                    printf("%3d ",++counter);
                    key = 0;
                }
                if(box[i][j] >= 0){
                    printf("%c", boxi[i][j]);
                    //box[i][j] = 0;
                }
                if((box[i][j] == -1) && (j)){key = 1;}
                if(j == (n-1)){key = 1;}
            }
        }printf("\n");
        /*for(int i = 0; i < m; i++){
            for(int j = 0; j < (n); j++){
                printf("%5d", box[i][j]);

            }printf("\n");
        }*/
        key = 0;
        counter = 1;
        printf("Down\n");
        printf("%3d ", counter);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((key == 1) && (box[i][j] > 0)){
                    printf("\n");
                    printf("%3d ",++counter );
                    key = 0;
                }
                if(box[i][j] >= 0){
                    for(int k = i; k < m; k++){
                        if(box[k][j] >= 0){
                            printf("%c", boxi[k][j]);
                            box[k][j] = -2;
                        }
                        if(box[k][j] == -1){key = 1; break;}
                        if(k == (m-1)){key = 1;}
                    }
                }
                //if((box[i][j] == -1) && (i)){key = 1;}
                //if(i == (m-1)&&!key1){printf("\n"); key = 0;}
            }
        }printf("\n");
        /*for(int i = 0; i < m; i++){
            for(int j = 0; j < (n); j++){
                printf("%5d", box[i][j]);

            }printf("\n");
        }*/
    }
    return 0;
}
