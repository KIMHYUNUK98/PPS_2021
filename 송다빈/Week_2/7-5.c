#include <stdio.h>
#include <string.h>

int main() {
    char n[11];

    scanf("%s", n);

    for (int i = 0; i < strlen(n)-1; i++) {
        for (int j = i; j < strlen(n); j++) {
            if (n[i] < n[j]) {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("%s", n);

    return 0;
}