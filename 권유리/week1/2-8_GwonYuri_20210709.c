#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int case_num;
    int i,j;

    scanf("%d", &case_num);
    for(i=0; i<case_num; i++){
        printf("String #%d\n", (i+1));
        scanf("%s", str);
        for(j=0; j<strlen(str); j++){
            printf("%c",(char)((str[j] - 'A' + 1) % 26 + 'A'));
        }
        printf("\n\n");
    }
    return 0;
}