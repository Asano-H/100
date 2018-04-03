#include<stdio.h>
int main(void){
	int a,b,ans;
	printf("input 1st value: ");
	scanf("%d",&a);
	printf("input 2nd value: ");
	scanf("%d",&b);

	ans = a/b;
	printf("result: %d\n",ans);
	printf("result: %d",ans*b);

	return 0;
}