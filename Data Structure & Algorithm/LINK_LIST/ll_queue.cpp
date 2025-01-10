//C program to make a link list as a queue
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    struct node *next, *start;
    int data;
};

struct node *front = NULL;
struct node *rear = NULL;

void insert(int val);
int delete();
void display();

int main() {
    int choice;

    do {
        printf("Enter the choice:\n");
        printf("1. Insert into the queue\n");
        printf("2. Delete from the queue\n");
        printf("3. Display the queue\n");
        printf("4. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int val;
                printf("Enter the value to insert: ");
                scanf("%d", &val);
                insert(val);
                break;
            }

            case 2: {
                int val = delete();
                if (val != -1)
                    printf("Deleted value: %d\n", val);
                break;
            }

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

void insert(int val) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Overflow: Unable to allocate memory for new node.\n");
        return;
    }
    new_node->data = val;
    new_node->next = NULL;
    if (rear == NULL) {
        front = rear = new_node;
    } else {
        rear->next = new_node;
        rear = new_node;
    }
}

int delete() {
    if (front == NULL) {
        printf("Underflow: Queue is empty.\n");
        return -1;
    }
    struct node *ptr = front;
    int val = ptr->data;
    if (front == rear) {
        front = rear = NULL;
    } else {
        front = front->next;
    }
    free(ptr);
    return val;
}

void display() {
    struct node *ptr = front;
    printf("Queue: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

