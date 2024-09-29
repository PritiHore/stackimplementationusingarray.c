// using array 
#include <stdio.h>


#define MAX 5  

int stack[MAX];
int top = -1;  


void push() {
    int value;
    if (top == MAX-1 ) {
        printf("Stack Overflow! Cannot push any more elements.\n");
    } else {
        printf("Enter the value to be pushed: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}


void print() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
    
    if(choice==1){
        push();
    }
    else if(choice==2){
        pop();
    }
    else if(choice==3){
        print();
    }
    else if(choice==4){
        exit(0);
    }
    else{
        printf("No operation");
    }
    }
    return 0;
}
