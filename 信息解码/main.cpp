#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
string boxin;
int stnd[100];
int inpb[100];
int main()
{   freopen("input.txt", "r", stdin);
    while (true){
        getline(cin,boxin);
        //cout << boxin;
        //getchar();
        memset(inpb, 0, sizeof(inpb));
        //cout << inpb[20];
        for(int i = 0; ; i++){
            scanf("%d", inpb);
            //printf("%d %d %d",inpb[i],inpb[i-1],inpb[i-2]);
            if(inpb[i]==inpb[i-1]==inpb[i-2]){break;}
        }//break;



    }//printf("S");

}
