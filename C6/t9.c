#include<stdio.h>
long long a[1005],b[1005];
int main(){
	long long n,s,max=0,t;
	scanf("%lld%lld",&n,&s);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&a[i],&b[i]);
	}
	for(int i=1;i<=n;i++){
		if(b[i]>max){
			t=i;
			max=b[i];
		}	
	}
	long long ans=1;
	for(int i=1;i<=n;i++){
		if(i!=t){
			ans*=a[i];
		}
	}
	printf("%lld\n",ans*s/max);
	return 0;
}
/*int max(int n){
	int j=0;
	for(int i=1;i<n;i++){
		if(a[i]>a[j]){
			j=i;
		}
	}
	return j;
}
void selectSort(int n){
	int t,j;
	for(int i=n;i>1;i--){
		j=max(i);
		t=a[j];
		a[j]=a[i-1];
		a[i-1]=t;
		t=b[j];
		b[j]=b[i-1];
		b[i-1]=t;
	}
}*/
