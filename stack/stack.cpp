#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push() {
	int item;
    if (top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push element.\n");
    } else {
    	  printf("Enter element to push: ");
                scanf("%d", &item);
    	top++;
        stack[top] = item;
        printf("Element %d pushed into the stack.\n", item);
    }
}

int pop() {
    if (top < 0) {
        printf("Stack is empty. Cannot pop element.\n");
        return -1;
    } else {
       
        printf("Element %d popped from the stack.\n", stack[top]);
        top--;
        return 0;
    }
}

void peek() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; ++i) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    while (1) {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
              push();
              break;
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

