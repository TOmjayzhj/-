#include<stdio.h>
#define Max 80
int main(void)
{
	char ch[Max];
	char *p;
	//*p=ch[10];
	//gets(ch);
	scanf("%s",&ch);
	puts(ch);
	printf("\n");
    printf("%s","string"+1);
	return 0;
}

