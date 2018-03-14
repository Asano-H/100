/*整数値を2つ入力させ、それらの値の和差積商と余りを求めるプログラムを作成せよ。
なお、差と商は1つ目の値から2つ目の値を引いた、あるいは割った結果とする。余りは無い場合も0と表示するのでよい。*/

#include<stdio.h>
int main(void){
	int n1,n2;
	printf("input 1st number:");
	scanf("%d",&n1);
	printf("input 2nd number:");
	scanf("%d",&n2);
	printf("和:%d\n",n1+n2);
	printf("差:%d\n",n1-n2);
	printf("積:%d\n",n1*n2);
	printf("商:%d, 余り:%d",n1/n2,n1%n2);

	return 0;
}