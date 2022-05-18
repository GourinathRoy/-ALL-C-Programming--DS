#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
void append();
void delete();
void display();
int length();
void add_any_poss();
void revers();
void display_rev();
void gotoxy(int x,int y)
{
   COORD c;
   c.X=x;
   c.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
struct node
{
   struct node* left;
   int data;
   struct node* right;
};
struct node* head , *tell = NULL;
int main()
{
   int n;
   printf("Press any key to continue.......");
   getch();
   sleep(1);
   gotoxy(100,1);
   printf("DOUBLY");
   sleep(1);
   gotoxy(107,2);
   printf("CIRCULAR");
   sleep(1);
   gotoxy(115,3);
   printf("LINKED");
   sleep(1);
   gotoxy(121,4);
   printf("LIST");
   sleep(1);
   while(1)
   {
   	 printf("\nOptions available are..\n");
     printf("\n1: for add new data at DCLL||\n");
     printf("2: for add a data at any pos in DCLL||\n");
     printf("3: for delete a data from DCLL||\n");
     printf("4: for display the DCLL data||\n");
     printf("5: for display the DCLL data in revers order||\n");
     printf("6: for count the length of the DCLL||\n");
     printf("7: for revers the DCll||\n");
     printf("8: for exit\n");
     printf("Enter your option:- ");
     scanf("%d",&n);
     switch(n)
     {
       case 1:
        {
           append();
           break;
        }
       case 3:
        {
           delete();
           break;
        }
      case 4:
        {
           display();
           break;
        }
      case 6:
        {
           int len;
           len=length();
           if(head)
           printf("Length of the DCLL = %d\n",len);
           break;
        }
      case 2:
        {
           add_any_poss();
           break;
        }
      case 7:
        {
           revers();
           break;
        }
      case 5:
        {
           display_rev();
           break;
        }
      case 8:
        {
           exit(0);
        }
      default:
        {
           printf("\nEnter a valid option\n");
        }
      }
    }
}
void append()
{
   struct node* newnode = NULL;
   newnode = (struct node*)malloc(sizeof(struct node));
   printf("Enter the data:- ");
   scanf("%d",&newnode->data);
   if(head == NULL)
   {
     head = tell = newnode;
     newnode->left = head;
     newnode->right = tell;
     printf("\nData inserted\n");
   }
   else
   {
     tell->right = newnode;
     newnode->left = tell;
     newnode->right = head;
     head->left = newnode;
     tell = newnode;
     printf("\nData inserted\n");
   }
}
void display()
{
   struct node* p = head;
   if(head == NULL)
   {
     printf("list is empty\n");
   }
   else
   {
     printf("\nData presents in the DCLL:- ");
     while(p->right!= head)
     {
     printf("%d\t",p->data);
     p = p->right;
     }
     printf("%d",p->data);
   }
   printf("\n");
}
void delete()
{
   int pos,i=1;
   if(head==NULL)
   {
     printf("DCLL is empty\n");
   }
   else
   {
     int len = length();
     printf("Enter the possition:- ");
     scanf("%d",&pos);
     if(pos>len)
     {
       printf("\nNo data found at this possition\n");
       printf("Currentely the DCLL have %d nodes",len);
     }
     else if(pos==1)
     {
       struct node* p = head,* q;
       q = p->right;
       head = q;
       p->right = NULL;
       p->left = NULL;
       q->left = tell;
       tell->right = head;
       free(p);
       printf("\nData deleted\n");
     }
     else if(pos==len)
     {
       struct node* p,* q = tell;
       p=tell->left;
       p->right = head;
       head->left = p;
       tell = p;
       q->left = q->right = NULL;
       free(q);
       printf("\nData deleted\n");
     }
     else
     {
       struct node* p = head,* q ,* r;
       while(i<pos)
       {
          p = p->right;
          i++;
       }
       q = p->left;
       r = p->right;
       q->right = r;
       r->left = q;
       p->left = p->right = NULL;
       free(p);
       printf("\nData deleted\n");
     }
   }
}
int length()
{
   if(head== NULL)
   {
      printf("\nDCLL is empty\n");
   }
   else
   {
      int i=1;
      struct node* p = head;
      while(p->right!=head)
      {
        i++;
        p = p->right;
      }
      return i;
   }
}
void add_any_poss()
{
   int pos,i=1;
   if(head==NULL)
   {
      printf("DCLL is empty\n");
   }
   else
   {
     int len = length();
     printf("Enter the possition:- ");
     scanf("%d",&pos);
     struct node* newnode = (struct node*)malloc(sizeof(struct node));
     if(pos>len)
     {
        printf("\npossition not found\n");
        printf("Currentely the DCLL have %d nodes\n",len);
     }
     else if(pos==1)
     {
        struct node* p = head;
        printf("Enter the data:- ");
        scanf("%d",&newnode->data);
        newnode->right = p;
        p->left = newnode;
        newnode->left = tell;
        tell->right = newnode;
        head = newnode;
        printf("\nData inserted\n");
     }
     else if(pos==len)
     {
        printf("Enter the data:- ");
        scanf("%d",&newnode->data);
        tell->right = newnode;
        newnode->left = tell;
        newnode->right = head;
        head->left = newnode;
        tell = newnode;
        printf("\nData inserted\n");
     }
     else
     {
        printf("Enter the data:- ");
        scanf("%d",&newnode->data);
        struct node* p = head,*q;
        while(i<pos)
        {
          p = p->right;
          i++;
        }
        q = p->left;
        q->right = newnode;
        newnode->left = q;
        newnode->right = p;
        p->left = newnode;
        printf("\nData inserted\n");
     }
   }
}
void revers()
{
  if(head == NULL)
  {
    printf("DCLL is empty\n");
  }
  else
  {
    struct node* current = head,* next;
    while(current!=tell)
    {
      next = current->right;
      current->right = current->left;
      current->left = next;
      current = next;
    }
    current->right = current->left;
    current->left = head;
    current = head;
    head = tell;
    tell = current;
    printf("\nDCLL is reversed\n");
  } 
}
void display_rev()
{
  if(head == NULL)
  {
    printf("DCLL is empty\n");
  }
  else
  {
    printf("Data presents in DCLL:- ");
    struct node* p = tell;
    while(p!=head)
    {
      printf("%d\t",p->data);
      p = p->left;
    }
    printf("%d\t",p->data);
  }
  printf("\n");
}
