#include <stdio.h>

int main(){
    int i,j;
    int score;
    int sum;
    int max_score=0;
    int max_index=0;

    for(i=0; i<5; i++){
        sum=0;
        for(j=0; j<4; j++){
            scanf("%d", &score);
            sum += score;
        }
        if(max_score<sum) {
            max_score=sum;
            max_index=(i+1);
        }
    }
    printf("%d %d\n", max_index, max_score);
    return 0;
}