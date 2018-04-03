/*整数値を2つ入力させ、1つめの値を2つめの値で割った結果を表示し、
続けてその結果に2つめの値を掛けた結果を表示するプログラムを作成せよ。
計算はすべて整数型で行うこと(割り切れない場合は自動的に小数点以下が切り捨てられる)*/

#include<stdio.h>
int main(void){
	int a,b,ans;
	printf("input 1st value: ");
	scanf("%d",&a);
	printf("input 2nd value: ");
	scanf("%d",&b);

	printf("result: %d\n",ans = a/b);
	printf("result: %d",ans*b);

	return 0;
}