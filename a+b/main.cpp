#include<cstdio>
#include<algorithm>
using namespace std;
//�ṹ�崢�������Ϣ
struct J{
    int  L;          //L������ĳ���
    int  B;          //B�������֦��
    char A[40];      //A���鴢�������״
}Bows[60];
//sort()������Ҫ�õ�
bool cmp(J a,J b){
    return a.L<b.L?true:false;
}

void Solve_and_Print(int n){
    sort(Bows,Bows+n,cmp);      //�Լ��ĳ�����������
    for(int i=0;i<n;i++){       //���Ƽ�������
        for(int j=1;j<=Bows[i].B;j++){  //���Ƽ���֦��
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
        //���ú�����������������״
        Solve_and_Print(n);
    }
}
