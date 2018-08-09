#include<stdio.h>
#include<string.h>


int main(void)
{   freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    char box1[105];
    char box2[105];
    while(scanf("%s%s", box1, box2) != EOF){
        int boxa[26];
        int boxb[26];
        //scanf("%s", box1);
        //scanf("%s", box2);
        memset(boxa, 0, sizeof(boxa));
        memset(boxb, 0, sizeof(boxb));
        //printf("%d\n", strlen(boxa));
        for(int i = 0; i < strlen(box1); i++){
            boxa[box1[i]-'A'] += 1;
        }
        for(int i = 0; i < strlen(box2); i++){
            boxb[box2[i]-'A'] += 1;
        }
        //for(int i = 0; i < 26; i++){printf("%d%d\n", boxa[i], boxb[i]);}
        //printf("%d\n", strlen(boxa));
        //for(int i = 0; i < 26; i++){printf("%d %d\n", boxa, boxb);}
        for(int j = 0; j < 26 - 1; j++){
            for(int i = 0; i < 26 - 1; i++){
                if(boxa[i] > boxa[i+1]){
                    int temp = boxa[i];
                    boxa[i] = boxa[i+1];
                    boxa[i+1] = temp;
                }
                if(boxb[i] > boxb[i+1]){
                    int temp = boxb[i];
                    boxb[i] = boxb[i+1];
                    boxb[i+1] = temp;
                }
            }
        }
        //for(int i = 0; i < 26; i++){printf("%d%d\n", boxa[i], boxb[i]);}
        int key = 1;
        for(int i = 0; i < 26; i++){
            if(boxa[i] != boxb[i]){key = 0; break;}
        }
        //printf("%d", key);
        if(key == 1){printf("YES\n");}
        if(key == 0){printf("NO\n");}
    }

    return 0;
}
