#include <stdio.h>
#define MAX_STACK_SIZE 100
#define true 1
#define false 0

int stack[MAX_STACK_SIZE];
int top = -1;

int is_empty() {
    if (top < 0) {
        return true;
    }else {
        return false;
    }
}

int is_full() {
    if (top == MAX_STACK_SIZE - 1) {
        return true;
    }else {
        return false;
    }
}

void push(int val) {
    if (is_full()) {
        printf("stack is full..\n");
    }else {
        stack[++top] = val;
    }
}

int pop() {
    if (is_empty()) return;
    else {
        int ret = stack[top--];
        return ret;
    }
}


int main() {
    push(10);
    push(11);
    push(14);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}