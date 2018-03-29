/*整数値を入力させ、入力値が0でなければ再度入力させ、0であれば終了するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	do{
		printf("input number: ");
		scanf("%d",&num);
	}while(num);

	return 0;
}