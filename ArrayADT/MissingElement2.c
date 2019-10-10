#include<stdio.h>

int main(){

	int A[6] = {2,3,4,5,7,8};
	int l = A[0];
	int h = A[6];
	int diff = l-0;
	for(int i=0; i<=6; i++){
		if(A[i]-i != diff){
			printf("Missing Element %d\n",i + diff);
			break;
		}
	}


}
