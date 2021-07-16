#include <stdio.h>
int main() {
    int n, k, i;
    char string[15][9]={" ","baby","sukhwan","tururu","turu","very","cute","tururu","turu","in","bed","tururu","turu","baby","sukhwan"};
    scanf("%d", &n);
    k=n/14;
    n%=14;
    if(!n) n=14;
    if(!(n%4) || !((n-3)%4)) {
        if(k>2 && !((n-3)%4)) printf("tu+ru*%d",k+2);
        else if(k>3 && !(n%4)) printf("tu+ru*%d",k+1);
        else {
            printf("%s",string[n]);
            for(i=0; i<k; i++) printf("ru");
        }
    }
    else printf("%s", string[n]);
}