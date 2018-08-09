#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
long long h = 1;
int n;
int u[1000000];
int divs=1;
int abo=1;
int main(){
    while(true){
        cin>>n;
        int counter=0;
        for(int i=0; i<n; i++){
            cin>>u[counter];
            counter++;
        }
        abo=n;
        for(int i=1; i<=abo; i++){
            abo*=i;
            abo%=1000000007;
            cout<<abo+'\n';
        }
        for(int i=0; i<counter; i++){
            for(int j=1; j<=u[i]; j++){
                divs*=j;
                divs%=1000000007;
            cout<<divs+'\n';
            }
        }
        int ans=abo/divs;
        cout<<ans+'\n';

    }



    return 0;
}

