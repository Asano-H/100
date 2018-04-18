/*整数値を入力させ、その値が1ならone、2ならtwo、3ならthree、
それ以外ならothersと表示するプログラムをswicth-case文を使って作成せよ。*/

#include<stdio.h>
int main(void){
	int no;
	printf("input number: ");
	scanf("%d",&no);

	switch(no){
		case 1: puts("one");	break;
		case 2: puts("two");	break;
		case 3: puts("three");	break;
		default : puts("other");	break;
	}
	return 0;
}