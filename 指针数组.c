#include<stdio.h>
int main(void)
{
	int a[3][4],i,j;
	int *p[3]={a[0],a[1],a[2]};
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",a[i]+j);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%6d",*(p[i]+j));
		}
		printf("\n");
	}
	return 0;
 } 
