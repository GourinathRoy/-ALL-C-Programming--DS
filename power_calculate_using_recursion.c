#include<stdio.h>
int power(int,int);
int main()
{
	
		int x=5,n=3,result;
	result=power(x,n);
	printf("the result=%d",result);
	return 0;
}
	int power(int x,int n)
	{
		if(n==0)
		return 1;
		else
		return x*power(x,n-1);
	}
