#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

struct room
{
    int J;
    int F;
    float quo;
}ro[10000];
bool compare(room a, room b)
{
    return a.quo>b.quo;
}
void input(int i)
{
    scanf("%d%d", &ro[i].J, &ro[i].F);
    ro[i].quo=(double)ro[i].J/(double)ro[i].F;
}


int main()
{
    int m, n;
    int i, j;
    //freopen("input.txt", "r", stdin);
    scanf("%d%d", &m, &n);
    while(m!=-1||n!=-1){
        memset(ro,0,sizeof(ro));
        for(i=0; i<n; i++){
            input(i);
        }
        sort(ro, ro+n, compare);
        double sum=0;
        for(i=0; i<n; i++){
            if(m<=0){break;}
            if(m>=ro[i].F){
                m-=ro[i].F;
                sum+=ro[i].J;
            }
            else{
                sum+=((double))ro[i].J)*(m/(double)ro[i].F);
                m=0;
            }
        }
        printf("%.3lf\n", sum);
        scanf("%d%d", &m, &n);
    }
    return 0;
}
