/*整数ちを入力させ、値が正であればpositiveと表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);
	if(num>0)
		printf("positive");
	
	return 0;
}