#include<stdio.h>
int main(){
	char a[8]={'g','a','b','c','d','e','f','g'};
	int i;
	scanf("%d",&i);
	printf("%c",a[i%7]);
	return 0;
}
