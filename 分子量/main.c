#include<stdio.h>
#include<string.h>
#include<ctype.h>
char box[100];
int calculate(int start, int end){
    int num = 0;
    for(int i = start; i < end; i++){
        num = (box[i]-'0') + num*10;
        //printf("CAL%f\n", box[i]-'0');
    }
    return num;
}
int main(void){
    float weight = 0;
    float weieach = 0;
    int start, key = 0;
    int end;
    int num;
    scanf("%s", box);

    for(int i = 0; i < strlen(box); i++){
        if(box[i] > 'A'){
            if(key == 1){
                end = i;
                key = 0;
                num = calculate(start, end);
                weight += weieach * (num - 1);
            }
            if(box[i] == 'C'){weieach = 12.01;}
            if(box[i] == 'H'){weieach = 1.008;}
            if(box[i] == 'O'){weieach = 16.00;}
            if(box[i] == 'N'){weieach = 14.01;}
            weight += weieach;
            //printf("FORIF\n%f\n%f\n", weight, weieach);
        }
        if(box[i] < 'A' && key ==0){
            start = i;
            key = 1;
        }
    }
    if(box[strlen(box) - 1] < 'A'){
        end = strlen(box);
        num = calculate(start, end);
        weight += weieach * (num - 1);
        //printf("IF%f\n%f\n%f\n",(box[strlen(box) - 1]) - '0', weight, weieach);
    }
    printf("%g",weight);
    return 0;
}


