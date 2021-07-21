#include<stdio.h>

int main(){
    int case_num;
    int num, sum, count;
    int i,j,k;

    scanf("%d", &case_num);

    for(i  = 0; i < case_num; i++)
    {
        sum = 0,count = 0;
        double avg;
        scanf("%d", &num);
        int score_list[num];
        for(j = 0; j < num; j ++)
        {
            scanf("%d", &score_list[j]);
            sum+=score_list[j];
        }
        avg = sum/num;        
        for(k = 0; k < num; k ++)
            if(avg < score_list[k]) count++;
        printf("%.3f%%\n", (float)count/num*100);
    }
}