#include <iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    int matrix[100];
    for(int i = 0; i < 2; i++){
        cin >> matrix[i];
    }
    sort(matrix, matrix + 2);

    for(int i = 0; i < 2; i++){
        cout << matrix[i] ;
    }

    return 0;
}
