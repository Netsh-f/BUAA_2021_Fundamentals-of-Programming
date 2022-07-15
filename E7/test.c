#include<stdio.h>
int main(){
	int a[100];
	printf("0x%#08x\n",a);
	printf("0x%#08x\n",&a);
	printf("0x%#08x\n",&a+7);
	return 0;
}
