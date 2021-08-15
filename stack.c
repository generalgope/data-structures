#include <stdio.h>
#define MAX 5

int top = -1;
int stack[MAX];

int empty() {
	if (top == -1)
		return 1;
	else
		return 0; 
}

int full() {
	if (top == MAX - 1)
		return 1;
	else
		return 0; 
}

void push() {
	int element;

	if (!full()) {
		printf("\n");
		printf("Enter an element: ");
		scanf("%d", &element);
		top += 1;
		stack[top] = element;
	}
	else {
		printf("\n");
		printf("Overflow! Stack is full. \n");
	}
}

void pop() {
	int data;
	
	if (!empty()) {
		data = stack[top];
		top -= 1; 
		printf("\n");
		printf("%d was popped from stack.\n", data);
	}
	else {	
		printf("\n");
		printf("Underflow! Stack is empty. \n");
	}
}

void peep() {
	if (!empty()) {
		printf("\n");
		printf("Top element is %d \n", stack[top]);
	}
	else {	
		printf("\n");
		printf("Underflow! Stack is empty\n");
	}
}	

void display() {
	if (!empty()) {
		printf("\n");
		printf("The elements in the stack are: \n");
		
		for (int i =  top; i >= 0; i--) {
			printf("%d \n", stack[i]);
		}
		printf("\n");
	}
	else {
		printf("\n");
		printf("Underflow! Stack is empty.\n");
	}
}

void main() {
	int choice;
	empty();
	full();
	
	do {
		printf("\nPress '1' to PUSH");
		printf("\nPress '2' to POP");
		printf("\nPress '3' to PEEP");
		printf("\nPress '4' to DISPLAY");
		printf("\nPress '5' to EXIT");
		printf("\nPress a key: ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				display();
			case 5:
				break;
		}
	} while (choice != 5);
}	
	
	
