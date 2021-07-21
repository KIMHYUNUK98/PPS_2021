#include <stdio.h>

int main(){
    int num,i,j;
    int remainder[10];
    int same_count;
    int dif_count=0;
    for(i=0; i<10; i++){
        scanf("%d", &num);
        remainder[i]=(num%42);
    }
        
    for(i=0; i<10; i++){
        same_count=0;
        for(j=i+1; j<10; j++){
            if(remainder[i]==remainder[j]) same_count++;
        }
        if(same_count == 0) dif_count++;
    }
    printf("%d\n", dif_count);
    return 0;
}