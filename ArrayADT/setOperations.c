#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	printf("\nElements are\n");
	for(i=0;i<arr.length;i++){
		printf("%d",arr.A[i]);
	}
}

//When you perform Union we should not have duplicates
struct Array* Union(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	
	struct Array* arr3=(struct Array *)malloc(sizeof(struct Array));

	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}else if(arr2->A[j]<arr1->A[i]){
			arr3->A[k++]=arr2->A[j++];
		}else if(arr1->A[i]==arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	
	//Code for Remaining Elemnts
	for(;i<arr1->length;i++){
		arr3->A[k++]=arr1->A[i];
	}
	for(;j<arr2->length;j++){
		arr3->A[k++]=arr2->A[j];
	}
	arr3->length=k;
	arr3->size=10;

	return arr3;
}


// In intersection we will copy an Element only if they are equal
struct Array* Intersection(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	
	struct Array* arr3=(struct Array *)malloc(sizeof(struct Array));

	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			i++;
		}else if(arr2->A[j]<arr1->A[i]){
			j++;
		}else{
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	
	arr3->length=k;
	arr3->size=10;

	return arr3;
}

struct Array* Difference(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	
	struct Array* arr3=(struct Array *)malloc(sizeof(struct Array));

	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}else if(arr2->A[j]<arr1->A[i]){
			j++;
		}else if(arr1->A[i]==arr2->A[j]){
			i++;
			j++;
		}
	}
	
	//Code for Remaining Elemnts
	for(;i<arr1->length;i++){
		arr3->A[k++]=arr1->A[i];
	}
	
	arr3->length=k;
	arr3->size=10;

	return arr3;
}


int main(){

	struct Array arr1={{2,6,10,15,25},10,5};
	struct Array arr2={{3,6,7,15,20},10,5};
	struct Array *arr3;

	arr3=Difference(&arr1,&arr2);
	Display(*arr3);

	return 0;
}
