/*整数値を入力させ、その値が-10以下、
または、10以上であればOKと表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	if(num<-10 || 10<num){
		printf("OK");
	}
	return 0;
}