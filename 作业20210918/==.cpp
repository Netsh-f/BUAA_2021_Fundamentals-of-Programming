#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if((a*a)/(b*b)==(a/b)*(a/b))
		printf("equal!\n");
	else
		printf("%d %d\n",(a*a)/(b*b),(a/b)*(a/b));
	return 0;
}
