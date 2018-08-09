#include <cstdio>
#include <cctype>
#include <cstring>
char c[100];
int main(void){
    int counter1 = 0, counter2 = 0, answer = 0;
    int key = 0;
    scanf("%s", c);
    for(int i = 0; i < strlen(c); i++){
        //printf("case%d\n", i + 1);
        if(c[i]=='O'){
            counter1++;
            key = 1;
        }
        if(c[i]!='O' || i == strlen(c) - 1){
            if(key == 1){
                for(int j = 1; j < counter1; j++){
                    counter2 += j;
                }
                key = 0;
            }
            answer += counter2;
            answer += counter1;
            counter1 = 0;
            counter2 = 0;
        //printf("counter1 %d\n", counter1);
        //printf("counter2 %d\n", counter2);
        }
    }
    printf("%d", answer);
    return 0;
}
