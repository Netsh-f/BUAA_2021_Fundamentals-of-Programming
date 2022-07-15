#include<stdio.h>
long long p,q,a,b,c;
long long f(long long n){
	if(n==1)
		return p;
	else if(n==2)
		return q;
	else
		return a*f(n-1)+b*f(n-2)+c;
}

int main(){
	long long n;
	scanf("%lld",&n);
	scanf("%lld%lld%lld%lld%lld",&p,&q,&a,&b,&c);
	printf("%lld\n",f(n));
	return 0;
}
