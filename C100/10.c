/*整数値を入力させ、その値を絶対値にして表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int num;
	printf("input number: ");
	scanf("%d",&num);

	if(num<0)
		num=num*(-1);
	printf("absolute value is %d",num);

	return 0;
}