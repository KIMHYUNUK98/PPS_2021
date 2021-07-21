#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    scanf("%s", input);

    for(int i=0; i<strlen(input); i++){
        printf("%c", input[i]);
        if(i%10==9 || i==(strlen(input)-1)) printf("\n");
    }
    return 0;
}