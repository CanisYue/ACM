#include<cstdio>
#include<iostream>
#include<string.h>

int people[20];
int para[20];
int para1[20];
int np, np2, key;
void method1 (int n, int k){
    //k -= 1;
    for(int i = k; k != 0; k--){
        np += 1;
        if(np == n+1){np = 1;}
        while(para[np] == 0) {
            np += 1;
            if(np == n+1){np = 1;}
        }//printf("n1 %d\n", np);
    }
    n -= 1;
    //para[np] = 0;
    //printf("%d,", people[np]);
}

void method2 (int n, int m){
    for(int i = m; m != 0; m--){
        np2 -= 1;
        if(np2 == 0){np2 = n;}
        while(para[np2] == 0) {
            np2 -= 1;
            if(np2 == 0){np2 = n;}
            //printf("%d\n", n2);
        }//printf("n2 %d\n", np2);
    }
    para[np] = 0;
    if(np2 != np){
        n -= 1;
        para[np2] = 0;
        para[np] = 0;
        printf("%d %d,", people[np],people[np2]);
    }
    else
        printf("%d ,", people[np]);
}


int main(void)
{
    int n, k, m;
    while(scanf("%d%d%d", &n, &k, &m) && n){
        memset(para, 1, sizeof(para));
        //memset(para1, 1, sizeof(para1));
        for(int i = 1; i < n+1; i++) people[i] = i;
        np = 1;
        np2 = n;
        method1(n, k-1);
        method2(n, m-1);
        while(n != 0){
            method1(n, k);
            method2(n, m);
        }
    }
}

