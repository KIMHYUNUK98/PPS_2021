#include <stdio.h>
 
int main() {
    int arr[9];
    int check[9] = {0, };
    int sum = 0;
 
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
 
    sum -= 100;
 
    int find = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (arr[i] + arr[j] == sum) {
                check[i] = check[j] = 1;
                find = 1;
                break;
            }
        }
        if (find) break;
    }
 
    for (int i = 0; i < 9; i++) if (!check[i]) printf("%d\n", arr[i]);
 
    return 0;
}