#include<stdio.h>
int main(void){
	int num[10];
	for(int i=0; i<10; i++){
		num[i]=i;
	}
	for(int i=0; i<10; i++){
		printf("%d\n",num[i]);
	}
	return 0;
}