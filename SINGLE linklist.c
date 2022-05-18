#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node*link;
	};
		void insertAtBeg(struct node**);
		void insertAtEnd(struct node**);
		void display(struct node*);
		int main()
		{
			int ch;
			struct node *head=NULL;
			while(1)
			{
				printf("\n 1.insertat begining...\n");
				printf("\n 2.insertat End...\n");
				printf("\n 3.Display...\n");
				printf("4.exit...\n");
				printf("Enter your choice.");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						insertAtBeg(&head);
						break;
						case 2:
							insertAtEnd (&head);
							break;
						case 3:
							display(head);
							break;
						case 4:
							exit(0);
							default:
								printf("Enter a valid choice...");
											
			}
		}
		getch();
		return 0;
	}
		void insertAtBeg(struct node**h)
		{
		struct node *ptr;
		int value;
		ptr=(struct node *)malloc(sizeof(struct node));	
		
		if(NULL==ptr)
		{
			printf("memory not allocated...");
			exit(0);
		}
		
			printf("Enter a value:");
			scanf("%d",& value);
			ptr->data=value;
			if(NULL==*h)
			{
				*h=ptr;
				ptr->link=NULL;
			}
			else
			{
				ptr->link=*h;
				*h=ptr;
			}
		}
			void insertAtEnd (struct node**h)
			{
				struct node*ptr,*loc;
				int value;
				ptr=(struct node*)malloc(sizeof(struct node));
				if(NULL==ptr)
				{
					printf("memory not allocated...");
					exit (0);
				}
				printf("Enter any value:");
				scanf("%d",&value);
				ptr->data=value;
				if(NULL==*h)
				{
					*h=ptr;
					ptr->link=NULL;
				}
				else
				{
					loc=*h;
					while(loc->link)
					{
						loc=loc->link;
					}
						loc->link=ptr;
						ptr->link=NULL;
				}
			}
				void display(struct node*h)
				{
					struct node*ptr;
					ptr=h;
					while(ptr!=NULL)
					{
						printf("%d\t",ptr->data);
						ptr=ptr->link;
					}
				}
				
