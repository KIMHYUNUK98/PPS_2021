#include <stdio.h>

typedef struct {
    int age;
    char name[101];
} Member;

Member m[100000];

int main() {
    int n;
    int young = 0, old = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &m[i].age, m[i].name);
        if (m[i].age < young) young = m[i].age;
        if (m[i].age > old) old = m[i].age;
    }
    
    for (int i = young; i <= old; i++) {
        for (int j = 0; j < n; j++) {
            if (m[j].age == i) printf("%d %s\n", m[j].age, m[j].name);
        }
    }
    
    return 0;
}