#include<stdio.h>
#include<string.h>


int code[8][1<<8];

int main(){
    while(readcodes()){
        printcodes();
        for(; ;){
            int len = readint(3);
            if(len == 0) break;
        printf("len=%d\n", len);
            for(;;){
                int v = readint(len);
        printf("v = %d\n", v);
                if(v==(1<<len)-1) break;
                putchar(code[len][v]);
            }
        }
        putchar('\n');
    }
    return 0;
}
