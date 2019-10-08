#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
	int length;
	int breadth;
};

int main(){
	struct Rectangle r={10,5};
	struct Rectangle *p=&r;
	p->length=20;
}
