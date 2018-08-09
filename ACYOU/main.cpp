#include<cstdio>
#include<iostream>
#include<string.h>

using namespace std;
char words[100000];
int main(void)
{
    //freopen("input.txt", "r", stdin);

    while(gets(words)){
        int num[130];
        memset(num, 0, sizeof(num));
        int len=strlen(words);
        for(int i=0; i<len; i++){
            if(words[i]>=97&&words[i]<=122){
                num[words[i]]+=1;
            }
            /*if(words[i]>=65&&words[i]<=90){
                words[i]+=32;
                num[words[i]]+=1;
            }*/
        }
        for(int i = 97; i<=122; i++){
            printf("%c:%d\n", i, num[i]);
        }
        printf("\n");
    memset(words, 0, sizeof(words));
    }


    return 0;
}
