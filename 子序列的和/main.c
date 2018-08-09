#include <stdio.h>
float answer[10000000000];
int main(void)
{
    int num1, num2, counter=0;
    int n, m, i;
    //float answer[10000000000];
    float ans=0;
    float temp;

    scanf("%d%d", &num1, &num2);
    while(num1!=0||num2!=0)
    {
        if(num1>num2)
        {
            m=num1;
            n=num2;
        }
        else
        {
            m=num2;
            n=num1;
        }
        for(i=n;i<=m;i++)
        {
            ans+=1/((float)i*(float)i);
            /*temp=(float)i*(float)i;
            ans+=(1/temp);*/
            //printf("%f%.5f\n",temp,ans);
        }
        //printf("%.5f",ans);
        answer[counter]=ans;
        ans=0;
        counter++;
        scanf("%d%d", &num1, &num2);
    }
    for(int j=0; j<counter; j++)
    {
        printf("Case %d: %.5f\n", j+1,answer[j]);
    }

    return 0;
}
