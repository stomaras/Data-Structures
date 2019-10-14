#include<stdio.h>
int main(){
	int A[11] = {6,7,8,9,11,12,15,16,17,18,19};
	int l = A[0];
	int h = A[11];
	int n = 11;

	int diff = A[0]-0;
	for(int i = 0;i<n;i++){
		if(A[i]-i != diff){
			while(diff<A[i]-i){
				printf("Missing Elemnts are : %d\n",i+diff);
				diff++;
			}
		}
	}
}
