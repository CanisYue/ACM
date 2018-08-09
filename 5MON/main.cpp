#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char save[100];
int num[100000];
int ans=0;
int main()
{
    long int a=0;
    int p=0;
    while(~scanf("%ld", &a)){
        int stnd=a;
        int key=1;
        ans=0;
        memset(num, 0, sizeof(num));
       while(key){
            while(a){
                ans+=(a%10)*(a%10);
                a/=10;
                //printf("a%d\n", a);
            }
            num[p]=ans;
            p++;
            if(ans==1){
                printf("HAPPY\n");
                break;
            }
            for(int i=0; i<p-1; i++){
                if(ans==num[i]){
                    key=0;
                   // printf("%d\n", save[i]);
                   // printf("%d\n", ans);
                    break;
                }
            }
            a=ans;
            ans=0;
            //printf("ans%d\n", a);
        }
        if(key==0)
            printf("UNHAPPY\n");
    }
    return 0;
}
