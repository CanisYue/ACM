#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string.h>
using namespace std;

char side='>';
char k1='+';
char k2='-';

struct bow
{
    int A;
    int B;
}bo[10000];

bool compare(bow a, bow b)
{
    return a.B<b.B;
}

int main(void)
{
    //freopen("input.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    //printf("%d\n", n);
    for(int i=0; i<n; i++){
        //memset(bo, 0, sizeof(bo));
        int t;
        scanf("%d", &t);
        for(int h=0; h<t; h++){
            //printf("%d\n", h);
            scanf("%d%d", &bo[h].A, &bo[h].B);
        }
        //printf("%d\n", t);
        sort(bo, bo+t, compare);
        for(int h=0; h<t; h++){
            for(int j=0; j<bo[h].B; j++){
                printf("%c%c", side, k1);
                int f=bo[h].A-2;
                for(int k=0; k<f; k++){
                    printf("%c", k2);
                }
                printf("%c%c\n", k1, side);
            }
            printf("\n");
        }
    }
    return 0;
}
