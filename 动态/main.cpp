#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int gold[]={10,2,4,9,4};
    int worker[]={2,3,3,4,5};
    int p[5];
    int num=10;
    int i, j, k;
    for(i=0; i<5; i++){
        if(i>=worker[i]){
           p[i]=gold[0];
        }
        else
            p[i]=0;
    }
    int result[19]=0;

    return 0;
}
