#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++){
        long int m;
        scanf("%ld", &m);
        int ans=0;
        for(long int j=1; j*j<=m; j++){
            if(m%j==0){ans+=2;}
            if(j*j==m){ans-=1;}
        }
        printf("%d\n", ans);
    }
    return 0;
}
