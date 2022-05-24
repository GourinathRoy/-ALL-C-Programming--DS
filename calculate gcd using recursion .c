#include<stdio.h>
int gcd (int,int);
int main()
{
	int result;
	result=gcd(10,5);
	printf("the result =%d",result);
	return 0;
}
	int gcd(int a,int b)
	{
		while(a!=b)
		{
			if(a>b)
			{
				return gcd(a-b,b);
			}
				else
				{
					return gcd(a,b-a);
				}
		}
		return a;
	}

