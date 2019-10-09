#include<stdio.h>
int add(int a, int b)
{
  int c;
  c = a + b;
  return(c);
}

int main()
{
  int x,y,z;
  x=10;
  y=15;
  z = add(x,y);
  printf("sum is %d",z);
 }
