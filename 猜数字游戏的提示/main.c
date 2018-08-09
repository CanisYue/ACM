#include <stdio.h>
int rans[len];
int ans[100][len];
int len;
int main(void)
{
    int counter1=0, counter2=0;
    int counter[100][2]
    int counter3 = 0, temp;
    while(scanf("%d", &len) && len){
        for(int i = 0; i < len; i++){
            scanf("%d", &rans[len]);
        }
        for(int j = 0; ; j++)
            temp = 0;
            for(int k = 0; k < len; k++){
                scanf("%d", &ans[j][k])
            }
            for(int k = 0; k < len; k++){
                temp+=ans[j][k]
            }
            if(temp==0)
                break;
            counter3++;
        for(int j = 0; j < counter3; j++){
            for(int k = 0; k < len; k++){
                if(ans[j][k] == rans[k]){
                    counter1++;
                }
            }
        }
    }

}
