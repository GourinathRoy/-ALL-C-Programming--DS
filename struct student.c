#include<stdio.h>
int main()
{
	struct student
	{
		char name[50];
		int roll;
		int marks;
	};
	int x;
	x=sizeof(struct student);
	printf("%d",x);
}
