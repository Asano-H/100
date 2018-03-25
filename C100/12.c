/*整数値を入力させ、その値の回数だけHello World!を繰り返して表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number");
	scanf("%d",&num);

	for(int i=0;i<num;i++){
		printf("Hello World!\n");
	}
	return 0;
}