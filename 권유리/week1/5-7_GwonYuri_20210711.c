#include <stdio.h>
#include <string.h>

int main(void){
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'c' || str[i] == 'z' || str[i] == 's'){
            if(str[i+1] == '=' || str[i+1] == '-') len--;
        }
        else if(str[i] == 'd'){
            if (str[i+1] == 'z' && str[i+2] == '=') len--;
            else if(str[i+1] == '-') len--;  
        }
        else if (str[i] =='l' || str[i] == 'n'){ 
            if (str[i+1] == 'j') len--; 
        }
    }
    printf("%d\n", len);
    return 0;
}