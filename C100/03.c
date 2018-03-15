/*整数値を入力させ、その入力値を表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);
	printf("your number is %d",num);

	return 0;
}