#include <stdio.h>
#include <stdlib.h>

int size;
int top = -1;
int *stack;

void push()
{
    if (top == size - 1)
    {
        printf("Stack Overflow! Stack is full.\n");
    }
    else
    {
        int val;
        printf("Enter value to push: ");
        scanf("%d", &val);
        stack[++top] = val;
        printf("%d pushed successfully.\n", val);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! Stack is empty.\n");
    }
    else
    {
        printf("%d popped successfully.\n", stack[top--]);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack (top to bottom): ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == size - 1;
}

int main()
{
    printf("Enter the size of the stack: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));

    if (stack == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int choice;

    while (1)
    {
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek (Top element)\n");
        printf("4. Display Stack\n");
        printf("5. Check if Empty\n");
        printf("6. Check if Full\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
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
            if (isEmpty())
                printf("Stack is Empty.\n");
            else
                printf("Stack is Not Empty.\n");
            break;
        case 6:
            if (isFull())
                printf("Stack is Full.\n");
            else
                printf("Stack is Not Full.\n");
            break;
        case 7:
            printf("Exiting...\n");
            free(stack);
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
