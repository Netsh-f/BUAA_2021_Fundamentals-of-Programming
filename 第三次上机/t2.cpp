#include<stdio.h>
int main(){
	int n,x;
	while(~scanf("%d%d",&n,&x)){
		if(x%2==1)
			printf("1 ");
		else
			printf("0 ");
		if(x>=1)
			printf("1 ");
		else
			printf("0 ");
		if(x==n)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
