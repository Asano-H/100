#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	if(num==0){
		printf("zero");
	}else{
		printf("not zero");
	}

	return 0;
}