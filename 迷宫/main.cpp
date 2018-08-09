#include <iostream>
#include <cstdio>

using namespace std;
char maze[1000][1000];
int step[4][2]={{0,1},{-1,0},{1,0},{0,-1}};
int main()
{
    int n,m;
    typedef pair<int, int> P;
    freopen("input.txt", "r", stdin);
    while(~scanf("%d%d", &n, &m)){
        getchar();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                scanf("%c", &maze[i][j]);
                if(maze[i][j]=='S');
                    pair<int, int> ps=make_pair(i,j);
                if(maze[i][j]=='G')
                    P pg=make_pair(i,j);
            }
            getchar();
        }
        /*for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                printf("%c", maze[i][j]);
            }
            printf("\n");
        }*/
        printf("%d",ps.first);

    }
    return 0;
}

