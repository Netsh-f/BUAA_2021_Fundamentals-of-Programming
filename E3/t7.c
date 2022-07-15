#include<stdio.h>
int main(){
	int n,x;
	scanf("%d%x",&n,&x);
	x=(~x)+1;
	int bit[25];
	for(int i=0;i<n;i++){
		bit[i]=x&1;
		x>>=1;
	}
	for(int i=n-1;i>=0;i--){
		printf("%d",bit[i]);
	}
	printf("\n");
	return 0;
}
