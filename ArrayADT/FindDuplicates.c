#include<stdio.h>
#include<stdlib.h>

int main(){
  int lastDuplicate = 0;
  int A[10] = {3,6,8,8,10,12,15,15,15,20};
  
  for(int i=0;i<=9;i++){
    if((A[i]==A[i++]) && (A[i]!=lastDuplicate)){
      printf("%d",A[i]);
      lastDuplicate = A[i];
     }
  }
 }
