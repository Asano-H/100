#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);
	
	if(5<num && num<20){
		printf("OK");
	}
	return 0;
}