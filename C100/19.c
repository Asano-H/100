#include<stdio.h>
int main(void){
	int num[5],n;
	for(int i=0; i<5; i++){
		printf("input number: ");
		scanf("%d",&n);
		num[i]=n;
	}

	for(int i=0; i<5; i++){
		printf("%d\n",num[i]);
	}
	return 0;
}