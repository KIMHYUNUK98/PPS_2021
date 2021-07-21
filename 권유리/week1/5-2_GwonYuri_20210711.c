#include <stdio.h>

int main(){
    int case_num;
    float num;
    char opr;
    int i,j;
    float result;

    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){
        result =0;
        scanf("%f ", &num);
        result = num;
        while(1){
            opr = getchar();
            if(opr == '\n') break;
            else if(opr == '@') result *= 3;
            else if(opr == '%') result += 5;
            else if(opr == '#') result -= 7;
        }
        printf("%.2f\n", result); 
    }
    return 0;
}