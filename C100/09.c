/*整数値を入力させ、値が正であればpositive、負であればnegative、
0であればzeroと表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	if(num==0){
		printf("zero");
	}else if(num>0){
		printf("positive");
	}else{
		printf("negative");
	}

	return 0;
}