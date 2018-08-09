#include <iostream>

using namespace std;

int main()
{
    for(int i =0; i<1<<3; i++){
        for (int j = 0 ; j < 3 ; j++)  {
            if ((1 << j) & i)
            {
                printf("%d %d %d\n", i, 1<<j, j);
            }
        }
    }
    if(1&10){cout<<"t";}
    return 0;
}
