#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int all[100][3];
int b[100][2];
int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        vector<int> box;
        vector<int> vv;
        int n, m;
        scanf("%d%d", &m, &n);

        for(int j = 0; j<m; j++){
            scanf("%d", &all[j][0]);
            scanf("%d", &all[j][1]);
            scanf("%d", &all[j][2]);
            box.push_back(all[j][1]);
            vv.push_back(all[j][0]);
            if(all[j][2]>1){
                for(int h = all[j][2]; h>1; h--)
                    box.push_back(all[j][1]);
                    vv.push_back(all[j][0]);
            }
            //printf("all %d %d %d\n", all[j][0], all[j][1], all[j][2]);
            //printf("vector %d %d\n", box[j], vv[j]);
        }
        int total = vv[0];
        int biggest = 0;
        for(int k = 0; k<box.size()-1; k++){
            int temp = box[k];
            if(total<vv[k]){
                total = vv[k];
            }
            //printf("temp %d\n", temp);
            for(int q = k+1; q<box.size(); q++){
                if(temp+box[q]<m){
                    temp+=box[q];
                    total+=vv[q];
                }

                if(total>biggest){
                    biggest = total;

                }
                 //printf("total %d temp %d\n", total, temp);
            }
        }
        if(vv[box.size()-1]>biggest){
            biggest = vv[box.size()-1];
        }
        printf("%d\n", biggest);
    }
}
