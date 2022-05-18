#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void traversal();
void peek();
int stack[5];
int size=-1;
int main()
{
	int ch;
	while(1){
		printf("\n***********************Stack Operations********************\n");
		printf("Press 1 for Push\nPress 2 for Pop\nPreess 3 for Traversal\nPrees 4 for Peek\nPress 5 for Quit\n");
		printf("Choose your Operation : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				traversal();
				break;
			case 4:
				peek();
				break;
			case 5:
				exit(0);
			
		}
	}
	
	getch();
	return 0;
}
void push()
{
	int ele;
	if(size==4)
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("Enter the ele\n");
		scanf("%d",&ele);
		size=size+1;
		stack[size]=ele;
	}
}
void pop()
{
	if(size==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("poped ele is : %d\n",stack[size]);
		size=size-1;
	}
}
void traversal()
{
	int i;
	if(size==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
	printf("Stack elements are-----\n");
	for(i=0;i<=size;i++)
	printf("%d\t",stack[i]);
	}

}
void peek(){
	printf("Peek ele is : %d\n",stack[size]);
}
