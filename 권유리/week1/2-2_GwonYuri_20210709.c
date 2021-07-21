#include <stdio.h>
#include <string.h>

int main(){
    char answer[80];
    int case_num;
    int sum, score;

    scanf("%d", &case_num);
    for(int i=0; i<case_num; i++){
        sum=0;
        score=1;
        scanf("%s", answer);
        for(int j=0; j<strlen(answer); j++){
            if(answer[j]=='O') {
                sum += score;
                score++;
            }
            else if(answer[j]=='X'){
                score = 1;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}