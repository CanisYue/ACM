#include <string.h>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct room
{
    int J;
    int F;
    double quo;
}ro[100000];

bool compare(room a, room b)
{
    return a.quo>b.quo;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int m, n;
    scanf("%d%d", &m, &n);
    while(m!=-1||n!=-1){
        //memset(ro,0,sizeof(ro));
        for(int i=0; i<n; i++){
            scanf("%d%d", &ro[i].J, &ro[i].F);
            ro[i].quo=(double)ro[i].J/(double)ro[i].F;
        }
        sort(ro, ro+n, compare);
        double sum=0;
        for(int i=0; i<n; i++){
            if(m<0){
                break;
            }
            if(m>=ro[i].F){
                m-=ro[i].F;
                sum+=ro[i].J;
            }
            else{
                sum+=(double)m/((double)ro[i].F)*(double)ro[i].J;
                break;
            }

        }
        printf("%.3f\n", sum);
        scanf("%d%d",&m,&n);
    }
    return 0;
}
