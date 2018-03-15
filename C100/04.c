/*整数値を入力させ、その入力値を3倍した計算結果を表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);
	printf("answer = %d",num*3);

	return 0;
}