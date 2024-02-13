#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node* create_head() {
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}

void insert(Node *head, int data, int position) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    Node *current = head;
    for (int i = 0; i < position; i++) {
        current = current->next;
    }
}

    
int get_length(Node *head){
    int len = 0;
    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
        len++;
    }
    return len;
}

void show_data(Node *head){
    int len = get_length(head);
    if (len == 0) {
        printf("NULL List\n");
        return;
    }else {
        Node *current = head->next;
        printf("[");
        for (int i = 0; i < len; i++) {
            printf("%d, ", current->data);
            current = current->next;
        }
        printf("]\n");
        return;
    }

}

int main() {
    Node *head = create_head();
    Node *new_node = (Node *)malloc(sizeof(Node));
    Node *new_node1 = (Node *)malloc(sizeof(Node));
    Node *new_node2 = (Node *)malloc(sizeof(Node));
    new_node->data = 0;
    new_node1->data = 1;
    new_node2->data = 2;
    
    new_node2->next = NULL;
    head->next = new_node;
    new_node->next = new_node1;
    new_node1->next = new_node2;

    int len = get_length(head);
    printf("len: %d \n", len);
    show_data(head);
    return 0;
}