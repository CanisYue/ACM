#include <iostream>
#include <cstdio>
using namespace std;
int matrix[101];
int main()
{
    matrix[0]=0;
    int head=1;
    int tail=4;

    for(int i=1; i<4; i++){
        scanf("%d", matrix[i]);
    }

    while(head<tail)
    {
        printf("%d", matrix[head]);
        head++;

        q[tail]=q[head];
        tail++;

    }
    return 0;
}
