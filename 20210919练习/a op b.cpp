#include<stdio.h>

int w0,w1,w2,w3,s[40];

int op(int x,int y){
	if(!x&&!y)return w0;
	if(!x&&y)return w1;
	if(x&&!y)return w2;
	return w3;
}

int main(){
	int q;
	long long a,b;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		long long ans=0;
		scanf("%lld%lld",&a,&b);
		scanf("%d%d%d%d",&w0,&w1,&w2,&w3);
		for(int j=0;j<32;j++){
			s[j]=op(a&1,b&1);
			a>>=1;
			b>>=1;
		}
		for(int j=31;j>=0;j--){
			ans=(ans<<1)+s[j];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
