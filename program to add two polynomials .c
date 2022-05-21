//Program to add two polynomials
#include<stdio.h>
#include<conio.h>
void add_two_polynomial(int a1[],int n,int a2[])
{
int i,a3[50];
for(i=n;i>=0;i--)
{
a3[i]=a1[i]+a2[i];
}
printf("After adding two polynomial....\n");
for(i=n;i>=0;i--)
{
printf("%dx^%d %c ",a3[i],i,i>0?'+':' ');
}
}
int main()
{
int n1,n2,max,i,j,array1[50],array2[50],array3[50];
printf("Enter the degree of first polynomial:- ");
scanf("%d",&n1);
printf("Enter the degree of second polynomial:- ");
scanf("%d",&n2);
if(n1>n2)
max = n1;
else
max = n2;
printf("Enter coefficients value of first polynominal...\n");
printf("Press any key to continue.....\n");
getch();
for(i=max;i>=0;i--)
{
printf("Enter coefficient of x^%d:- ",i);
scanf("%d",&array1[i]);
}
printf("Enter coefficients value of second polynominal...\n");
printf("Press any key to continue.....\n");
getch();
for(i=max;i>=0;i--)
{
printf("Enter coefficient of x^%d:- ",i);
scanf("%d",&array2[i]);
}
add_two_polynomial(array1,max,array2);
}
