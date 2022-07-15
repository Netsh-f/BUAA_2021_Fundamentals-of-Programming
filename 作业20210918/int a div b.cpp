#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==0)
		printf("ERROR. The divisor is ZERO.\n");
	else
		printf("%d div %d = %d\n",a,b,a/b);
	return 0;
}
