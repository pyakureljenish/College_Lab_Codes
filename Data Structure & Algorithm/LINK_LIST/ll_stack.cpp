//C program to make a link list as a stack
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    struct node *next;
    int data;
};

struct node *top = NULL; // Representing the top of the stack

void push(int val);
int pop();
void display();

int main() {
    int choice, val;

    do {
        printf("Enter the choice:\n");
        printf("1. Push to stack\n");
        printf("2. Pop from stack\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &val);
                push(val);
                break;

            case 2:
                val = pop();
                if (val != -1)
                    printf("Popped value: %d\n", val);
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Please enter a valid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

void push(int val) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Overflow: Unable to allocate memory for new node.\n");
        return;
    }
    new_node->data = val;
    if (top == NULL) {
        new_node->next = NULL;
        top = new_node;
    } else {
        new_node->next = top;
        top = new_node;
    }
}

int pop() {
    if (top == NULL) {
        printf("Underflow: Stack is empty.\n");
        return -1;
    }
    struct node *ptr = top;
    int val = ptr->data;
    top = top->next;
    free(ptr);
    return val;
}

void display() {
    struct node *ptr = top;
    printf("Stack (top to bottom): ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

