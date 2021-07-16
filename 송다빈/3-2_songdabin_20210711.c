#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int cnt=0;

    scanf("%s", string);

    for (int i=0; i<strlen(string); i++) {
        printf("%c", string[i]);
        cnt++;
        if (cnt==10) {
            cnt=0;
            printf("\n");
        }
    }

    return 0;
}