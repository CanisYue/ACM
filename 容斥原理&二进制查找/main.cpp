#include <iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
int boo[1000];
//int answ[1000];
vector<int> answ;
vector<int> anoth;
void zhi(int n){
    //int cnt=1;
    memset(boo, 0, sizeof(boo));
    boo[1]=0;
    answ.clear();
    answ.push_back(1);
    for(int i = 2; i<n; i++){
        if(boo[i]==0){
            answ.push_back(i);
            cout<<i;
            cout<<'\n';
            for(int j = 1; j*i<n; j++){
                boo[j*i]=1;
            }
        }
    }
    for(int i = 1; answ[i]*answ[i]<n; i++){
        if(n%answ[i]==0){
            anoth.push_back(answ[i]);
            cout<<answ[i]<<'\n';
            n/=answ[i];
            while(n%answ[i]==0){
                n/=answ[i];
            }
        }
    }
    if(n>1){anoth.push_back(n);cout<<n<<'\n';}


    //for(int i = 1; )
}
int solve(int m)
{
    int sum=0;
    for(int i =1; i<1<<anoth.size(); i++){
        int ant=1;
        int bit=0;
        for(int j = 0; j<anoth.size(); j++){
            if(i&1<<j){
                ant*=anoth[j];
                bit+=1;
            }printf("%d %d\n", ant, bit);
        }
        int cur = m/ant;
        if(bit&1){
            sum+=cur;
        }
        else{
            sum-=cur;
        }
        printf("%d\n", sum);

    }
    return m-sum;
}

int main()
{
    int n, m;
    cin>>n>>m;
    zhi(n);
    cout<<solve(m);
    return 0;
}
