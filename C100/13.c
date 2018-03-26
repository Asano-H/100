#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	for(int i=0;i<=num;i++){
		printf("%d\n",i);
	}
	return 0;
}