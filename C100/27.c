/*整数値を入力させ、1からその値までの総和を計算して表示するプログラムを作成せよ。
ただし、0以下の値を入力した場合は0と表示する。*/

#include<stdio.h>
int main(void){
	int i,num,sum=0;
	printf("input number: ");
	scanf("%d",&num);

	if(num<=0){
		sum = 0;
	}else{
		for(i=0;i<=num;i++){
			sum = sum+i;
		}
	}

	printf("sum = %d",sum);
	return 0;
}