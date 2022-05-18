#include<stdio.h>
#include<conio.h>
int main()
{
	
	int sparse_matrix [7][8]=
	{
		{0,0,0,0,5,0,0,0},
		{0,0,4,0,0,0,6,0},
		{1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,3,0,0},
		{0,0,0,0,0,0,0,2},
		{0,0,9,0,7,0,0,0}
		
	};
		int i,j,size=0;
		printf("sprase matrix......\n");
		for(i=0;i<7;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%d ",sparse_matrix [i][j]);
		}
		printf("\n");
	}
	//efficieant of matrix....
	for(i=0;i<7;i++)
	{
		for(j=0;j<8;j++)
		{
			if(sparse_matrix [i][j]!=0)
			{
				size++;
			}
		}
	}
		int matrix[3][size],k=0;
	for(i=0;i<7;i++)
	{
		for(j=0;j<8;j++)
		{
			if(sparse_matrix[i][j]!=0)
			{
				matrix[0][k]=i;
				matrix[1][k]=j;
				matrix[2][k]=sparse_matrix[i][j];
				k++;
			}
		}
	}
	
	printf(".........efficient matrix......\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d  ",matrix [i][j]);
		}
			printf("\n");
		}		
			return 0;
		
		
	
}
