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