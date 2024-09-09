#include <stdio.h>

void push();
void pop();
void display();

int item, top = -1, a[20], maxsize, ch = 0, i;

void main() {
    printf("Enter the limit: ");
    scanf("%d", &maxsize);
    
    while (ch != 4) {
        printf("Enter choice (1: Push, 2: Pop, 3: Display, 4: Exit): ");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice, please try again.\n");
        }
    }
}

void push() {
    if (top == maxsize - 1) {
        printf("Stack overflow\n");
    } else {
        printf("Enter the element to be pushed: ");
        scanf("%d", &item);
        top++;
        a[top] = item;
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        item = a[top];
        top--;
        printf("Deleted item is %d\n", item);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The stack is:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", a[i]);
        }
    }
}
