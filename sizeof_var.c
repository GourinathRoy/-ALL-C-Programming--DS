#include<stdio.h>
struct a
{
	int a;
};
int main()
{
	struct a var[2];
	var[0].a=10;
	var[1].a=20;
	printf("%d\n",var[0].a);
	printf("%d\n",var[1].a);
	}
