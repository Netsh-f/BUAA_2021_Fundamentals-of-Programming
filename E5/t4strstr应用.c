#include<stdio.h>

long long f(long long x){
	int cnt=0;
	for(int i=0;i<64;i++){
		if((x>>i)&1)
			cnt++;
	}
	return cnt;
}

int main(){
	long long x;
	while(~scanf("%lld",&x)){
		printf("%lld\n",f(f(f(x))));
	}
	return 0;
}
