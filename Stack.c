#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Size 10 // Define the size of the stack
int stack[Size]; // Declare the stack array
int top = -1; // Initialize the top of the stack

bool isFull () {
    return (top == Size - 1); // Check if the stack is full
}
bool isEmpty () {
    return (top == -1); // Check if the stack is empty
}

// Push Operation.
void push (int value) {
    if (isFull ()) {
        printf("Stack Overflow\n"); // Handle stack overflow
    } else {
        top ++; // Increment the top index
        stack[top] = value; // Add the value to the stack
        printf("%d - Pushed to Stack\n", value);// Confirm the push operation
    }
}

// Pop Operation.
void pop () {
    if (isEmpty ()) {
        printf("Stack Underflow\n"); // Handle stack underflow
    } else {
        int value = stack[top]; // Get the top value
        top --; // Decrement the top index
        printf("%d - Popped from stack\n", value); // Confirm the pop operation
    }
}

//Peek Operation.
void peek () {
    if (isEmpty ()) {
        printf("stack is Empty\n"); // Handle empty stack
    } else {
        printf("Top Element is: %d\n", stack[top]); // Display the top element
    }
}

// Display Operation.
void display () {
	int i;
    if (isEmpty ()) {
        printf("stack is empty\n");// Handle empty stack
    } else {
        printf("Stack elements are: ");
        for (i = top; i >= 0; i--) { // Loop through the stack from top to bottom
            printf("%d ", stack[i]); // Display each element
        }
        printf("\n"); // New line after displaying the stack
    }
}
int main () {
    int n = 0;
    int value = 0;

    while( n != 10 ) { // Loop until the user chooses to exit
        printf("__LIFO_-_Last_In_First_Out__Menu__\n");
        printf("\t1. Push(Add)\n");
        printf("\t2. Pop(Remove)\n");
        printf("\t3. Peek(View Top Element)\n");
        printf("\t4. Display(All)\n");
        printf("\t5. Exit\n");
        printf("\tPlease Select => ");
        scanf("%d", &n);
        printf("\n");

        switch (n) {
            case 1:
                printf("Enter Value to Push: ");
                scanf("%d", &value);
                push(value); // Call the push function
                printf("\n");
                break;
            case 2:
                pop(); // Call the pop function
                printf("\n");
                break;
            case 3:
                peek(); // Call the peek function
                printf("\n");
                break;
            case 4:
                display(); // Call the display function
                printf("\n");
                break;
            case 5:
                exit(0); // Exit the program
                printf("Exiting..."); // Confirm exit
                printf("\n");
                break;
            default:
                printf("Invalid choice, please try again."); // Handle invalid input
                printf("\n");
        }
    }
    return 0;
}
