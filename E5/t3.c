#include<stdio.h>
int main(){
	long long n,m,a[1010],max=0;
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]<=m&&(a[j]-a[i])*(m/a[i])>max){
				max=(a[j]-a[i])*(m/a[i]);
			}
		}
	}
	if(max<=0){
		printf("%lld\n",m);
	}else{
		printf("%lld\n",m+max);
	}
	return 0;
}
