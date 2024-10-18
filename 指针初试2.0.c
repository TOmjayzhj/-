#include<stdio.h>
double swap(int* a,int* b);
int main(void)
{
	int a=5;
	int b=7;
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
double swap(int* a,int* b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
 } 
