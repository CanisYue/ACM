#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=10;
    printf("%d\n", *p);
    printf("%d", p);
    return 0;
}
