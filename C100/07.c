/*整数値を乳旅行させ、値が0ならzero、0でなければnot zeroと表示するプログラムを作成せよ*/

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