#include<stdio.h>
int main(void){
	int num,a[10];
	printf("input number: ");
	scanf("%d",&num);

	for(int i=0; i<10; i++)
		a[i]=num;
	for(int i=0; i<10; i++)
		printf("%d\n",a[i]);

	return 0;
}