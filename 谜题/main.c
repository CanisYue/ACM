#include<stdio.h>
#include<string.h>
#define note "This puzzel has non final configuration\n"
int main(void){
    for(int H = 0; ;H++){
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
        int m, n, flag = 0;
        char matrix[5][6];
        char h;
        flag = 0;
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 6; j++){
                matrix[i][j] = getchar();
                if(matrix[i][j] == ' '){
                    m = i;
                    n = j;
                }
            }
        }
        char load[100];
        //scanf("%s", load);
        int i = 0;
        while(scanf("%c", &load[i])){
        if(load[i] == '0') break;
        else i+=1;
        }
        //printf("load %s\nlength %d\n", load, strlen(load));
        h=getchar();
        for(int i = 0; i < strlen(load); i++){
            if(load[i] == 'A'){
                if(m == 0){i = strlen(load); flag = 1;}
                else{matrix[m][n] = matrix[m-1][n]; matrix[m-1][n] = ' '; m-=1; }
            }
            if(load[i] == 'B'){
                if(m == 4){i = strlen(load); flag = 1;}
                else{matrix[m][n] = matrix[m+1][n]; matrix[m+1][n] = ' ';m+=1; }
            }
            if(load[i] == 'L'){
                if(n == 0){i = strlen(load); flag = 1;}
                else{matrix[m][n] = matrix[m][n-1]; matrix[m][n-1] = ' ';n-=1;}
            }
            if(load[i] == 'R'){
                if(n == 4){i = strlen(load); flag = 1;}
                else{matrix[m][n] = matrix[m][n+1]; matrix[m][n+1] = ' ';n+=1;}
            }
            if(load[i] == '0'){i;}
        }
        printf("puzzle %d:\n", H+1);
        if(flag == 1){
            printf(note);
        }
        if(flag == 0){
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 6; j++){
                    printf("%c", matrix[i][j]);
                }
            }
        }

    }
    return 0;
}
