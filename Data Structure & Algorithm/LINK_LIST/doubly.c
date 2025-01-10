#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev, *next;
    int data;
};

struct node *start = NULL;
struct node *avail = NULL; /* Represents the available memory for new nodes*/

void initializeMemory();
void insertAtBeginning(int val);
void display();

int main() {
    int choice, val,i; /* Declaring choice and val variables here*/

    initializeMemory(); /* Initialize memory for nodes*/

    do {
        printf("\nEnter the choice:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Display the list\n");
        printf("3. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &val);
                insertAtBeginning(val);
                break;

            case 2:
                display();
                break;

            case 3:
                exit(0);

            default:
                printf("Please enter a valid choice.\n");
        }
    } while (choice != 3);

    return 0;
}

void initializeMemory() {
	int i;
    /* Allocate memory for 10 nodes initially*/
    for (i = 0; i < 10; i++) {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->next = avail;
        avail = new_node;
    }
}

void insertAtBeginning(int val) {
    if (avail == NULL) {
        printf("Overflow: No memory available.\n");
        return;
    }

    struct node *new_node = avail;
    avail = avail->next;

    new_node->data = val;
    new_node->prev = NULL;
    new_node->next = start;

    if (start != NULL)
        start->prev = new_node;

    start = new_node;
}

void display() {
    struct node *ptr = start;
    printf("Linked List (forward): ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

