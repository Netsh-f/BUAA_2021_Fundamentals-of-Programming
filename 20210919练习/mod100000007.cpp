#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	n=n%100000007;
	printf("%lld\n",(n*3+1)%100000007);
	return 0;
}
