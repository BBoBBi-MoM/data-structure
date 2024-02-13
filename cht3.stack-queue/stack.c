#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct {
    int *data;
    int top;
    int size;
} Stack;

Stack create_stack() {
    Stack stack;
    stack.data = (int *) malloc(sizeof(int));
    stack.top = -1;
    stack.size = 1;
    return stack;
}

int is_full(Stack *stack) {
    return (stack->top == stack->size - 1);
}

int is_empty(Stack *stack) {
    return (stack->top < 0);
}

void push(Stack *stack, int item) {
    if (is_full(stack)) {
        extend_stack(stack);
    }
    stack->data[++stack->top] = item;
}

int pop(Stack *stack) {
    if (is_empty(stack)) return -1;
    else return stack->data[stack->top--];
}

void extend_stack(Stack *stack) {
    int new_size = stack->size * 2;
    int *new_data = (int *) malloc(sizeof(int) * new_size);
    for (int i = 0; i < stack->size; i ++) {
        new_data[i] = stack->data[i];
    }
    free(stack->data);
    stack->data = new_data;
    stack->size = new_size;
}

int main() {
    Stack stack = create_stack();
    printf("stack top: %d\n", stack.top);
    push(&stack, 10);
    printf("stack top: %d\n", stack.top);
    push(&stack, 11);
    printf("stack top: %d\n", stack.top);
    push(&stack, 12);
    printf("stack top: %d\n", stack.top);
    for (int i = 0; i < 3; i++) {
        printf("%d ", stack.data[i]);
    }
    printf("\n");
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", stack.data[0]);
    printf("stack top: %d\n", stack.top);
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    return 0;
}
