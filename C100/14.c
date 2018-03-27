/*整数値を入力させ、入力値から0まで数を1ずつ減らして表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	while(num>=0){
		printf("%d\n",num);
		num--;
	}
	return 0;
}
