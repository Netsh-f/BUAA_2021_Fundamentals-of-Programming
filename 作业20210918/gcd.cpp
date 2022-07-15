#include<stdio.h>

int gcd(int a,int b){
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m>=n)
		printf("%d\n",gcd(m,n));
	else
		printf("%d\n",gcd(n,m));
	return 0;
}
