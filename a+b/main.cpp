#include<cstdio>
#include<algorithm>
using namespace std;
//结构体储存箭的信息
struct J{
    int  L;          //L储存箭的长度
    int  B;          //B储存箭的枝数
    char A[40];      //A数组储存箭的形状
}Bows[60];
//sort()函数需要用到
bool cmp(J a,J b){
    return a.L<b.L?true:false;
}

void Solve_and_Print(int n){
    sort(Bows,Bows+n,cmp);      //对箭的长度升序排列
    for(int i=0;i<n;i++){       //控制箭的种类
        for(int j=1;j<=Bows[i].B;j++){  //控制箭的枝数
            printf(">+");
            for(int k=1; k<=Bows[i].L-2;k++)
                printf("-");
            printf("+>\n");
        }
        printf("\n");
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d%d",&Bows[i].L,&Bows[i].B);
        //调用函数解决并输出箭的形状
        Solve_and_Print(n);
    }
}
