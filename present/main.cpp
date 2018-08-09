#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
long long matrix[1000000];
long long num;
int main()
{
    int n;
    set<int> h;
    while(scanf("%d", &n)&&n!=0){
        h.clear();
        for(int i =0; i<n; i++){
            scanf("%d", &num);
            if(h.count(num)==1){h.erase(num);}
            else{h.insert(num);}
        }
        printf("%d\n", *h.begin());
    }
    return 0;
}
