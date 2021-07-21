#include <stdio.h>

int main() {
    int n, i;
    int arr[27]={0, };
    int flag = 0;
    char name[40];

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%s", name);
        arr[name[0]-'a']++;
    }

    for (i=0; i<26; i++) {
        if (arr[i]>=5) {
            printf("%c", 'a'+i);
            flag=1;
        }
    }

    if (flag==0) printf("PREDAJA");
    printf("\n");
}