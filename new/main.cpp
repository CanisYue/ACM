#include <iostream>
#include <cstdio>

using namespace std;
int t;
int a, b;
long long int n, m;
int mat[100000];
int main()
{
    cin>>t;
    for(int times=0; times<t; t++){
        int ans=1;

        cin>>n>>m;
        for(int i=1; i<=n; i++){
            mat[i]= n;
        }
        for(int i=0; i<m; i++){
            cin>>a>>b;
            mat[a]-=1;
            mat[b]-=1;
        }
        for(int i=1; i<=n; i++){
            if(mat[i]==1)
                ans+=1;
        }

        printf("%d\n", ans);
        if(ans-1>=0){
            for(int i=0; i<ans-1; i++){
                printf("1 ");
            }
        }
        int ans2=n-(ans-1);
        if(ans2!=0){
            printf("%d\n", ans2);
        }
    }
    return 0;
}
