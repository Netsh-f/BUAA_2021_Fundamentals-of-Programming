#include<stdio.h>
int main(){
	long long x,a;
	scanf("%lld",&x);
	for(int i=0;i<=15;i++){
		a=x&(1ll<<i)?1:0;
		x=x&~(1ll<<i);
		if(a==0)
			x=x|(1ll<<i);
	}
	printf("%lld\n",x);
	return 0;
}
