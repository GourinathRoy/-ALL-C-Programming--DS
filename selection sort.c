//Implementation Selection Sort
#include<stdio.h>
#include<conio.h>
void SelectionSort(int[],int);
int main()
{
	int a[]={8,5,2,6,9,3,1,4,0,7};
	int i;
	printf("Before Selection Sort \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	SelectionSort(a,10);
	printf("\nAfter Selection Sort\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	return 0;
}
void SelectionSort(int a[],int size)
{
	int i,j,min,temp,k;
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}	
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		///  step by step 
		printf("\nSTEP %d\n--------\n",i+1);
		for(k=0;k<size;k++)
		{
			printf("%d\t",a[k]);
		}
		printf("\n");
	}
}
