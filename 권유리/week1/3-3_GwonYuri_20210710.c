#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    scanf("%s", input);

    char change[strlen(input)];
    for(int i=0; i<strlen(input); i++){
        if (input[i]<'D') change[i] += input[i]-'A'+'X';
        else change[i] += input[i]-'D'+'A';
    }
    printf("%s", change);
    return 0;
}