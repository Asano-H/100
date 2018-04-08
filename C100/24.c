#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	if((-10<=num && num<0) || (10<=num)){
		printf("OK");
	}else{
		printf("NG");
	}

	return 0;
}