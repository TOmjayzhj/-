#include<stdio.h>
void minmax(int a[],int len,int* min,int* max);
int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min ,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	//printf("a[0]=%d\n",a[0]);
	//printf("sizeof(a)=%d\nsizeof(a[0])=%d\n",sizeof(a),sizeof(a[0]));
	printf("min=%d,max=%d\n",min,max);
	return 0;
}
void minmax(int a[],int len,int* min,int* max)
{
	int i;
	*min=*max=a[0];
	for(i=1;i<len;i++){
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}
	}
}

//指针与数组
#include<stdio.h>
void minmax(int a[],int len,int* min,int* max);
int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min ,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("a[0]=%d\n",a[0]);                                             //a[0]=1;
	printf("sizeof(a)=%d\nsizeof(a[0])=%d\n",sizeof(a),sizeof(a[0]));     //sizeof(a)=68 sizeof(a[0])=4
	printf("min=%d,max=%d\n",min,max);                                    
	int *p=a;
	printf("*p=%d\n",*p);                                                 //*p=1
	printf("p[10]=%d\n",p[10]);                                           //p[10]=13
	printf("*a=%d\n",*a);                                                 //*a=1
	return 0;
}
void minmax(int a[],int len,int* min,int* max)
{
	int i;
	printf("sizeof(a)=%lu\n",sizeof(a));                                   //sizeof(a)=8
	*min=*max=a[0];
	for(i=1;i<len;i++){
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}
	}
}


