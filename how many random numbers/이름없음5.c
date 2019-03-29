#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n, i;
	printf("how many random numbers you want?: ");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		if(i%8==0)
			printf("\n");
		printf("%-8d",rand());
	}
	return 0;
 } 
