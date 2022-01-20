#include<stdio.h>
union abc
{
	int a;
	char b;
};
int main()
{
	union abc var;
	union abc*p;
	p= &var;
	var.a=65;
	 
	
	printf("%d\n", p->a);
	printf("%c\n", p->b);
}
