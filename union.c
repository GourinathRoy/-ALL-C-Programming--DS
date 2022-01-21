#include<stdio.h>
union a
{
	int a;
	int b;
};
int main()
{
	union a var;
	 
	
	printf("%d\n", & var.a);
	printf("%d\n", & var.b);
}
