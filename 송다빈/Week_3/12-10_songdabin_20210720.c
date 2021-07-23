#include <stdio.h>

int main() {
    int test, height, width, n;
    int floor, room;

    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        scanf("%d %d %d", &height, &width, &n);
        
        if (n % height == 0) {
            room = (height * 100) + n / height;
        }
        else room = ((n % height) * 100) + n / height + 1;

        printf("%d\n", room);
    }

    return 0;
}