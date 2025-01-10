/*C program to implemnt the circular queue in order to insert the element at the beginning*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    struct node *next, *start;
    int data;
};

struct node *start = NULL;

void create_ll();
void display();

int main() {
    int choice;

    do {
        printf("Enter the choice:\n");
        printf("1. Create a circular linked list\n");
        printf("2. Display the circular linked list\n");
        printf("3. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_ll();
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

void create_ll() {
    struct node *new_node, *ptr;
    int n;

    printf("Enter the data:\n");
    scanf("%d", &n);

    while (n != -1) {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = n;

        if (start == NULL) {
            new_node->next = new_node; /* Circular reference for the first node*/
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = start; /* Make the new node point to the start for circularity*/
        }
        printf("\nEnter the data (-1 to stop): ");
        scanf("%d", &n);
    }
}

void display() {
    struct node *ptr = start;
    printf("Circular Linked List: ");
    if (start != NULL) {
        do {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != start);
    }
    printf("\n");
}

