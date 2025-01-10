#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef struct Stack {
    char items[MAX_STACK_SIZE];
    int top;
} Stack;

// Function to create an empty stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to push an item onto the stack
int push(Stack *s, char item) {
    if (s->top >= MAX_STACK_SIZE - 1) {
        return 0; // Stack overflow
    }
    s->items[++(s->top)] = item;
    return 1; // Success
}

// Function to pop an item from the stack
char pop(Stack *s) {
    if (s->top == -1) {
        return '\0'; // Stack underflow
    }
    return s->items[(s->top)--];
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if the string is accepted by the PDA
int isAccepted(const char *input) {
    Stack stack;
    initStack(&stack);

    // Push all 'a's onto the stack
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == 'a') {
            push(&stack, 'a');
        } else if (input[i] == 'b') {
            // For each 'b', pop an 'a' from the stack
            if (isEmpty(&stack)) {
                return 0; // More 'b's than 'a's
            }
            pop(&stack);
        } else {
            return 0; // Invalid character
        }
    }

    // The string is accepted if the stack is empty
    return isEmpty(&stack);
}

int main() {
    char input[100];
    
    printf("Enter a string of a's followed by b's (e.g., aabb, aaabbb): ");
    scanf("%s", input);
    
    if (isAccepted(input)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}
