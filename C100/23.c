#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);
	if(-5<=num && num<=10){
		printf("OK");
	}else{
		printf("NG");
	}

	return 0;
}