#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

typedef struct {
    int queue[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queue;


Queue create_queue() {
    Queue que;
    que.rear = -1;
    que.front = -1;
    return que;
}

int is_empty(Queue *que) {
    return (que->front == que->rear);
}

int is_full(Queue *que) {
    return (que->rear == MAX_QUEUE_SIZE - 1);
}

void add_que(Queue *que, int item) {
    que->rear = (que->rear + 1) % MAX_QUEUE_SIZE;
    if (is_full(que)) return -1;
    que->queue[que->rear] = item;
}

void delete_que(Queue *que) {
    if (is_empty(que)) return -1;
    que->front = (que->front + 1) % MAX_QUEUE_SIZE;
    return que->queue[que->front]

}

