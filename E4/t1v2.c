#include<stdio.h>

long long gcd(long long a,long long b){
	int t;
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}

int main(){
	long long a,b;
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%lld%lld",&a,&b);
		printf("%lld\n",a*b/gcd(a,b));
	}
	return 0;
}
