#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void link_list_creation();
void display_elements();
void deletion();
void insertion_end();

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

int main() {
    int choice;
    
    do {
        printf("Enter the Value of choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                link_list_creation();
                printf("Link list creation successful\n");
                break;
            case 2:
                display_elements(); 
                break;
            case 3:
                deletion();
                break;
            case 4:
                insertion_end();
                break;
            case 5:
                exit(0);
            default:
                printf("Enter option from 1-5\n");
                break;
        }
    } while(choice != 5);
    return 0;
}

void link_list_creation() {
    int num;
    struct node *n, *ptr;
    printf("Enter a data or -1 to end: ");
    scanf("%d", &num);
    while(num != -1) {
        n = (struct node*)malloc(sizeof(struct node));
        n->data = num;
        n->next = NULL;

        if (start == NULL) {
            start = n;
        } else {
            ptr = start;
            while(ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = n;
        }
        printf(" Enter the data: ");
        scanf("%d", &num);
    }
}

void display_elements() {
    struct node *ptr = start;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void deletion() {
    if (start == NULL) {
        printf("UNDERFLOW\n");
        return;
    }

    struct node *ptr = start;
    struct node *preptr = NULL;

    while (ptr->next != NULL) {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (preptr == NULL) { // Only one node
        free(start);
        start = NULL;
    } else {
        preptr->next = NULL;
        free(ptr);
    }

    printf("Deletion successful\n");
}

void insertion_end() {
    int num;
    printf("Enter the data: ");
    scanf("%d", &num);

    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = num;
    n->next = NULL;

    if (start == NULL) {
        start = n;
    } else {
        struct node *ptr = start;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = n;
    }

    printf("Insertion at end successful\n");
}
 