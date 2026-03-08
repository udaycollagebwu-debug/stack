#include <stdio.h>
#define max 10
int stack[max];
int top = -1;
void push(int itam)
{
    if (top == -1 || top == max - 1)
    {
        printf("The Stack is Empty");
    }
    else
    {
        printf("Enter the element you want to push in the stack:");
        scanf("%d", &itam);
        top++;
        stack[top] = itam;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("The Stack is Empty");
    }
    else
    {
        printf("The poped element is %d", stack[top]);
        top--;
    }
}
void dispay()
{
    if (top == -1)
    {
        printf("The stack is Empty");
    }
    else
    {
        printf("The element of the stack is :");
        for (int i = 0; i <= top; i++)
        {
            printf("%d\t", stack[i]);
        }
    }
}
int main()
{
    int choise, itam;
    while (1)
    {
        printf("\n1.push\n2.pop\n3.Display\n4.Exit");
        printf("\nEnter your choise:");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            push(itam);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("You have enterd an invalid choise");
        }
    }
}