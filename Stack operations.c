//Stack operations 
#include<stdio.h>
int top=-1; //Gloabal variable
int n;
int stack[100];
void push();
void pop();
void display();
void isEmpty();
void isFull();
void Top();
void main(){
	int ch;
	
	printf("\n\nEnter size of stack[1-100] : ");
	scanf("%d",&n);
	
	do{
	printf("Stack Operations : ");
	printf("\n1. Push");
	printf("\n2. Pop");
	printf("\n4. Display");
	printf("\n5. Top");
	printf("\n0. Exit");
	printf("\n\tEnter ur choice : ");
	scanf("%d",&ch);
	switch(ch){
		case 0:
			return 0;
			break;
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		
		case 4:
			display();
			break;
		case 5:
			Top();
			break;
		default:
			printf("Invalid choice !");
			break;
	}
}while(ch!=0);
}
void push(){
	int item;
	if(top==n-1){
		isFull();
	}
	else{
		top++;
		printf("\nEnter element : ");
		scanf("%d",&item);
		stack[top]=item;
	}		
}
void pop(){
	if(top==-1){
		isEmpty();
	}
	else{
		printf("\nData %d is removed\n",stack[top]);
		top--;
	}
}
void display(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
}

void Top()
{
	if(top == -1)
	{
		printf("stack is uderflow");
	}
	else
	{
		printf("\nTop : %d",top+1);
	}
}
void isFull(){
		printf("\nStack is Overflow/Full...");
}

void isEmpty(){
		printf("\nStack is underflow/empty");

}














