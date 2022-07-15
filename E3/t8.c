#include<stdio.h>
int main(){
	long long n,k,m;
	scanf("%lld%lld%lld",&n,&k,&m);
	int cnt=0;
	long long t=m,ans1=1,ern=1,ans2=1;
	for(int i=0;i<n;i++){
		ern*=2;
		ern%=1000000007;
	}
	ern--;
	for(int i=0;i<=k-1;i++){
		if(!(t&1))
			cnt++;
		t>>=1;
	}
	for(int i=0;i<cnt;i++){
		ans1*=ern;
		ans1%=1000000007;
	}
	cnt=0;
	t=m;
	for(int i=0;i<=k-1;i++){
		if(t&1)
			cnt++;
		t>>=1;
	}
	for(int i=0;i<cnt;i++){
		ans2*=ern;
		ans2%=1000000007;
	}
	printf("%lld %lld\n",ans1,ans2);
	return 0;
}
