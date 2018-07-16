#include<stdio.h>
int main(void){
	int num,sum=0;

	for(int i=0;i<5;i++){
		printf("input number: ");
		scanf("%d",&num);
		sum = sum+num;
	}

	printf("sum = %d",sum);
	return 0;
}
