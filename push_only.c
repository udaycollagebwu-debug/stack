#include<stdio.h>
#define max 10
int stack[max];
int top=-1;
void push(int itam){
    if(top==max-1)
    {
        printf("The Stack is Full");
    }
    else{
        printf("Enter the element you want to insert:");
        scanf("%d",&itam);
        top++;
        stack[top]=itam;
    }
}
void display(){
    if(top==-1){
        printf("The Stack is Empty");
    }
    else{
        printf("The elements in the Stack are:");
        for(int i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
    }
}
int main(){
    int itam,choice;
    while(1){
        printf("\n1.Push\n2.Display\n3.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push(itam);
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice");
        }
    }
}