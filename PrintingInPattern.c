#include<stdio.h>


int main()
{
	//Variable declaration
	int n,i,j;
	//Read data from user
	printf("Enter number of rows to be printed");
	scanf("%d",&n);
	
	//Logic
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			
		}printf("\n");
	}  
	return 0;
}
