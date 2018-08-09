#include<stdio.h>
char c[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main(void)
{
    int q, i;
    while((q=getchar()) != EOF){
        for(i=1; c[i] && c[i] != q; i++);
        if(c[i]) putchar(c[i-1]);
        else putchar((q));
    }
    return 0;
}
