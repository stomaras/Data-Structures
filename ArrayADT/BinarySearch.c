#include <stdio.h>
struct Array
{
	int A[5];
	int size;
	int length;
};

void Display(struct Array arr){
	int i;
	printf("\nElements are\n");
	for(i=0;i<arr.length;i++){
		printf("\n%d\n",arr.A[i]);
	}
}

void swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int BinarySearch(struct Array arr,int key){
	int l,mid,h;
	l=0;
	h=arr.length-1;

	while(l<=h){
		mid=(l+h)/2;
		if(key==arr.A[mid]){
			return mid;
		}else if(key<arr.A[mid]){
			h=mid-1;
		}else{
			l=mid+1;
		}
	}
	return -1;
}

int main(){
	struct Array arr={{2,3,4,5,6},10,5};
	printf("%d\n",BinarySearch(arr,3));
	Display(arr);
	return 0;
}
