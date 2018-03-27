#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	while(num){
		printf("%d",num);
		num--;
	}
	return 0;
}
