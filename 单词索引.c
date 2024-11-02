#include<stdio.h>
int main(void)
{
	int i,flag=0;
	char ch;
	char *color[]={"yellow","red","green"};
	ch=getchar();
	for(i=0;i<3;i++){
		if(ch==*color[i]){
			flag=1;
			puts(color[i]);
		}
	}
	if(flag==0)printf("Not Found!\n");
	return 0;
}
