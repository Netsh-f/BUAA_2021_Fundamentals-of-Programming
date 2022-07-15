#include<stdio.h>
long long a[100005],b[200005];
int main(){
	int t,n;
	long long ans=0;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		ans=0;
		for(int i=0;i<=200002;i++)
			b[i]=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%lld",&a[i]);
			b[a[i]-i+100000]++;
		}
		for(int i=0;i<=200002;i++){
			if(b[i]>1)
				ans+=b[i]*(b[i]-1)/2;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
