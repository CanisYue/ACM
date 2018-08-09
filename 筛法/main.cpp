#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<vector>
#include<stdlib.h>
using namespace std;
int prime[40000],m;
bool f[40000];
vector<int>p;//���������
//��ɸ����ʼ��40000���ڵ������������������prime�����У�m��¼��С
int init(){
    m=0;
    for(int i=2; i<40000; i++){
        if (f[i]==0) prime[m++]=i;//����
        //ɸȥ����
        for (int j=0; j<m&&i*prime[j]<40000; j++){
            f[i*prime[j]]=1;
            if (i%prime[j]==0) break;//��֤ÿ����ֻɸȥһ��
        }
    }
}
//��n�ֽ�������
void factor(int n){
    p.clear();
    for (int i=0; i<m&&prime[i]*prime[i]<=n; i++){
        if (n%prime[i]==0){
            p.push_back(prime[i]);
            printf("%d\n", prime[i]);
            n/=prime[i];
            while (n%prime[i]==0)
                n/=prime[i];
        }
    }
    if(n>1) {p.push_back(n);printf("%d\n", n);}
}
//�ö�����ʵ���ݳ�ԭ��,������[1,r]����n���ص����ĸ���
int solve(int r){
    int sum = 0;
    //i�ķ�Χ��1-2^p.size()���ռ����⣬ÿһ���Ӽ�����Ӧ��
    //�����ƶ���һ����Ҳ����i
    for (int i=1; i<(1<<p.size()); ++i){
        int mult = 1,bits = 0;
        for (int j=0; j<p.size(); ++j)
            if (i&(1<<j)){//��i�Ķ����Ƶĵ�jλ�Ƚϣ����Ƿ�Ϊ1������ѡ��
                bits++;//����i��1�ĸ�����Ҳ�����������ĸ���
                mult *= p[j];
                printf("%d %d %d\n", i, j, p[j]);
            }
        int cur = r / mult;
        printf("%d %d\n", cur, mult);
        if (bits & 1)//��1�ĸ�������������мӷ���������м���
            sum += cur;
        else sum -= cur;
    }
    return r - sum;//���ܵ���Ŀ-��n�����صĸ���
}
int main(){
    init();
    int n,r;
    while(cin>>n>>r){
        factor(n);
        cout<<solve(r)<<endl;
    }
    return 0;
}
