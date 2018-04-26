#include<stdio.h>
int main(void){
	int num,sum=0;
	printf("input number: ");
	scanf("%d",&num);

	for(int i=0;i<=num;i++){
		sum = sum+i;
	}

	printf("sum = %d",sum);
	return 0;
}