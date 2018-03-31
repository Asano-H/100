/*要素数10の配列を宣言し、i番目の要素の初期値をiとし、順に値を表示するプログラムを作成せよ。*/

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