#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int stack[MAXSIZE];
int top = -1;
void push();
void pop();
void display();

int main() {

    int choice;

    printf("\n1. PUSH\n");
      printf("2. POP\n");
      printf("3. DISPLAY\n");
      printf("4. EXIT\n");

while(1) {
    printf("\nEnter your choice :");
    scanf("%d", &choice);
    switch(choice) {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4: exit(0);
        break;
        default : printf("\nEnter valid choice..!\n");
break;

    }
}
return 0;
}


//Function to add an element into the stack.
void push() {
    int c;
    if(top == (MAXSIZE-1)) {
        printf("------Stack overflow------\n");
    }
    else
    {
        printf("Enter the element to be pushed :");
        scanf("%d",&c);
        stack[++top]=c;
    }
}

//Function to delete an element from the stack.
void pop() {
    if(top == -1) 
        printf("------Stack underflow------\n");
    else
    {
        printf("Popped element is %d \n", stack[top--]);
    
    }
}

//Function to display the status of the stack.
void display() {
    if(top == -1)
    printf("------Empty Stack------");
    else{
        printf("The elements of the stack are\n");
        for(int i = top; i>=0; i--)
        printf("%d\t",stack[i]);
    }
}