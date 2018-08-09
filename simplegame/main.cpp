#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;

int box[1000];
int main(void)
{
    int t;
    scanf("%d", &t);
    int ans = 0;
    for(int i = 0; i < t; i++){
        scanf("%d", &box[i]);
        printf("%d\n", box[i]);
    }
    for(int i = 0; i < t; i++){
        int num = box[i];
        printf("%d", num);
        //int temp = sqrt(num);
        /*for(int j = 0; j<num; j++){
            if(num%j == 0){
                ans += 1;
            }
        }*/
        ans = ans%15498;
        printf("%d", ans);
        ans = 0;
    }
    return 0;
}
