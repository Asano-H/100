#include<stdio.h>
int main(void){
	int i,n,fac=1;
	printf("input number: ");
	scanf("%d",&n);

	if(n<=0){
		fac = 1;
	}else{
		for(i=1;i<=n;i++){
			fac = fac*i;
		}
	}
	printf("factorial = %d",fac);

	return 0;
}
