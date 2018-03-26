/*整数値を入力させ、0から入力値まで数を1づつ増やして表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	for(int i=0;i<=num;i++){
		printf("%d\n",i);
	}
	return 0;
}