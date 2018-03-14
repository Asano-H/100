/*整数値を有力させ、値が0ならzeroと表示するプログラムを作成せよ*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number:");
	scanf("%d",&num);
	if(num==0)
		printf("zero");

	return 0;
}