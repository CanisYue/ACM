#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <set>
using namespace std;
char box[5]={'A','E','I','O','U'};
set<char> h;
int main()
{
    int kase;
    int i, j, k;
    h.insert('A');
    h.insert('E');
    h.insert('I');
    h.insert('O');
    h.insert('U');
    scanf("%d", &kase);
    getchar();
    for(i=0; i<kase; i++){
        char words[100];
        gets(words);
        //printf("%d", strlen(words));
        for(j=0; j<strlen(words); j++){
            if(words[j]>=97){words[j]-=32;}
            if(h.count(words[j])==1){printf("%c", words[j]);}
            else{printf("%c", words[j]+32);}
        }
        printf("\n");
    }
    return 0;
}
