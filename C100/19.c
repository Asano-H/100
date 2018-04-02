/*要素数5の整数型の配列を宣言し、すべての配列に対して順に入力された整数値を代入し、
すべての要素の値を表示するプログラムを作成せよ。*/

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