#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char a[5][7];
    char cmd[1005];
    int kase=0;
    while(gets(a[0]))
    {
        if(a[0][0]=='Z') break;
        for(int i=1; i<5; i++)
            gets(a[i]);
        int xx=0,yy=0;
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
                if(a[i][j]==' ')
                {
                    xx=i,yy=j;
                    break;
                }
        }
        int k=0;
        while(cin>>cmd[k])
        {
            if(cmd[k]=='0') break;
            else k++;
        }
        cmd[k]=0;
        getchar();
        int flag=0,x=xx,y=yy;
        for(int i=0; cmd[i]; i++)
        {
            if(cmd[i]=='A')
                x=xx-1,y=yy;
            else if(cmd[i]=='B')
                x=xx+1,y=yy;
            else if(cmd[i]=='L')
                x=xx,y=yy-1;
            else if(cmd[i]=='R')
                x=xx,y=yy+1;
            if(x<0||x>4||y<0||y>4)
            {
                flag=1;
                break;
            }
            else
            {
                a[xx][yy]=a[x][y];
                a[x][y]=' ';
                xx=x,yy=y;
            }
        }
        if(kase++)
            cout<<endl;
        cout<<"Puzzle #"<<kase<<":"<<endl;
        if(flag)
            cout<<"This puzzle has no final configuration."<<endl;
        else
        {
            for(int i=0; i<5; i++)
            {
                for(int j=0; j<5; j++)
                {
                    if(j) cout<<" ";
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
