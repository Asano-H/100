#include<stdio.h>
int main(void){
	int num,i;
	printf("input number: ");
	scanf("%d",&num);

	for(i=0;i<num;i++){
		printf(i);
	}
	return 0;
}