#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("My birthday is %d.",a);
	if(b<10)
			printf("0%d.",b);
	else
			printf("%d.",b);
	if(c<10)
			printf("0%d\n",c);
	else
			printf("%d\n",c);
	return 0;
}
