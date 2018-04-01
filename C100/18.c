/*要素数10の整数型の配列を宣言し、整数値を入力させ、
すべての配列の要素を入力値として、すべての要素の値を表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num,a[10];
	printf("input number: ");
	scanf("%d",&num);

	for(int i=0; i<10; i++)
		a[i]=num;
	for(int i=0; i<10; i++)
		printf("%d\n",a[i]);

	return 0;
}