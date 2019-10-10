#include<stdio.h>

int main()
{
	
	int n;
	int sum = 0;
	int s;

	int A[11] = {1,2,3,4,5,6,7,9,10,11,12};
	
	for(int i=0;i<11;i++)
	{
		sum=sum+A[i];
	}
	s = A[10]*(A[10]+1)/2;
	printf("Missing elent is %d",s-sum);
}
