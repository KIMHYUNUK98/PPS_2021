#include <stdio.h>

typedef struct {
    int queue[500001];
    int front, rear;   
} QueueDef;

QueueDef Queue;

void init(QueueDef* q) {
    q->front=q->rear=0;
}

int is_Empty(QueueDef* q) {
    return (q->front==q->rear);
}

int is_Full(QueueDef* q) {
    return ((q->rear+1)%500001==q->front);
}

void enqueue(QueueDef* q, int num) {
    if (is_Full(q)) return;

    q->rear=(q->rear+1)%500001;
    q->queue[q->rear]=num;
}

int dequeue(QueueDef* q) {
    if (is_Empty(q)) return 0;
    q->front=(q->front+1)%500001;
    return q->queue[q->front];
}

int main() {
    init(&Queue);
    int n, card=0;
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        enqueue(&Queue, i+1);
    }

    while (!is_Empty(&Queue)) {
        card=dequeue(&Queue); // 맨 위의 카드 버리기
        if (is_Empty(&Queue)) break;
        card=dequeue(&Queue);
        enqueue(&Queue, card);
    }
    printf("%d\n", card);

    return 0;
}