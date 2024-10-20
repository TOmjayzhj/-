#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	char sax[80],smin[80];
	scanf("%d",&n);
	scanf("%s",&sax);
	strcpy(smin,sax);
	for(i=0;i<n;i++){
		scanf("%s",sax);
		if(strcmp(sax,smin)<0)
		strcpy(smin,sax);
	}
	printf("min is %s\n",smin);
	return 0;
}
