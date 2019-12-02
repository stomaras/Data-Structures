// C program for implementation of Bubble Sort
#include<stdio.h>
#include<time.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for(i=0; i< n-1; i++){
		
		for(j = 0; j< n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}	

}


/* Function to print an Array */
void printArray(int arr[], int size)
{
	int i;
	for(i=0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

// Driver Program to test above functions
int main()
{
	int arr[] = {64,25,12,22,11,10,100};
	int n = sizeof(arr)/sizeof(arr[0]);
	clock_t t;
	t = clock();
	bubbleSort(arr, n);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
	printf("bubbleSort() took %f seconds to execute \n", time_taken);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
