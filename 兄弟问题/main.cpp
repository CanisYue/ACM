#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,x,y;
    int a,b;
    int mat[3000];
    //freopen("input.txt","r",stdin);
    while(~scanf("%d",&n)){
        memset(mat,0,sizeof(mat));
        for(int i=0; i<n; i++){
            scanf("%d%d", &x, &y);
            mat[x]=y;
        }
        int temp=1;
        a=0;
        b=0;
        while(mat[temp]){
            a++;
            temp=mat[temp];
        }
        temp=2;
        while(mat[temp]){
            b++;
            temp=mat[temp];
        }
        //printf("%d%d\n", a,b);
         if(a>b){printf("You are my elder\n");}
       if(a<b){printf("You are my younger\n");}
       if(a==b){printf("You are my brother\n");}
    }
    return 0;
}
