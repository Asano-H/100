/*整数値を入力させ、その値が-10未満ならrange 1、
-10以上0未満であればrange 2、
0以上であればrange 3、と表示するプログラムを作成せよ。*/

#include<stdio.h>
int main(void){
	int no;
	printf("input number: ");
	scanf("%d",&no);

	if(no<-10){
		printf("range1");
	}else if(-10<=no && no<0){
		printf("range2");
	}else if(0<=no){
		printf("range3");
	}

	return 0;
}