/*整数値を入力させ、0から入力値を超えない値まで2ずつ増やして表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number:");
	scanf("%d",&num);

	for(int i=0;i<=num;i=i+2){
		printf("%d\n",i);
	}
	return 0;
}