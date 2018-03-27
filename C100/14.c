#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	while(num>=0){
		printf("%d",num);
		num--;
	}
	return 0;
}
