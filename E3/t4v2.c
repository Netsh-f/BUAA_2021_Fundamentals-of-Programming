#include<stdio.h>
int main(){
	long long a,b,c=1,aa[33],d=1;
	scanf("%lld%lld",&a,&b);
	int bit[33];
	for(int i=0;i<=32;i++){
		bit[i]=b&1;
		b>>=1;
	}
	aa[0]=a;
	for(int i=1;i<=32;i++){
		aa[i]=aa[i-1]*aa[i-1];
		if(aa[i]>998244353)
			aa[i]%=998244353;
	}
	for(int i=0;i<=32;i++){
		if(bit[i]){
			c*=aa[i];
		}
		if(c>998244353)
			c%=998244353;
	}
	for(int i=0;i<=32;i++){
		bit[i]=c&1;
		c>>=1;
	}
	for(int i=0;i<=32;i++){
		if(bit[i]){
			d*=aa[i];
		}
		if(d>998244353)
			d%=998244353;
	}
	printf("%lld\n",d);
	return 0;
}
