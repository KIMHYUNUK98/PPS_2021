#include <stdio.h>
#include <string.h>

#define MAX_INPUT 1000000

int main(){
    int input[MAX_INPUT];
    int i,j;
    int count;
    int max_count=0;
    char max_char;

    for(i=97; i<122; i++){
        count=0;
        for(j=0; j<strlen(input); j++){
            if (input[j]==i || input[j]==(i-32)) count++;
        }

        if(max_count==count) max_char='?';
        else if(max_count<count) {
            max_count=count;
            max_char=i;
            if(max_char>=97) max_char-=32;
        }
    }
    printf("%c", max_char);
    return 0;
}