#include <stdio.h>

int main(){
    int num[10];
    int i;
    int select=0;
    

    for(i=0; i<8; i++){
       scanf("%d", &num[i]); 
    }
    
    for(i=0; i<7; i++){
       if (num[i]<num[i+1]){
           if(select == 2){
               select = 0;
               break;
           }
           select=1;
       }
       else if (num[i]>num[i+1]){
           if (select == 1) {
               select = 0;
               break;
           }
           select=2;
       }
    }


    if(select==1){
        printf("ascending\n");
    }
    else if(select==2){
        printf("descending\n");
    }
    else if(select==0){
        printf("mixed\n");
    }

    return 0;
}