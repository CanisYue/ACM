#include<stdio.h>
#include<string.h>
#define EOF -1

int main(void){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int num;
    while(scanf("%d", &num) != -1){
        if(num == -1){break;}
        char pro[100];
        char ans[100];
        int time = 0;
        int key = 0, key2 = 0;
        scanf("%s", pro);
        scanf("%s", ans);

        //printf("%s\n", pro);
        //printf("%s\n", ans);
        int left = strlen(pro);
        for(int i = 0; i < strlen(ans); i++){
            for(int j = 0; j < strlen(pro); j++){
                if(ans[i] == pro[j]){pro[j] = '0'; key2 = 1; left--;}
                //printf("%s\n", pro);
                //printf("%s\n", ans);
            }
            if(key2 == 0){time += 1;}
            if(key2 == 1){key2 = 0;}
            if(time == 7){key = 1; i = strlen(ans);}
        }
        printf("Round %d\n", num);
        if(key == 0){printf("You win.\n");}
        if((key == 1) && time == 7){printf("You lose.\n");}
        if((key == 0) && left > 0){printf("You chickened out\n");}
    }

    return 0;
}
