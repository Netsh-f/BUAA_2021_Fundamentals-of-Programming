#include<stdio.h>

int f(int a[],int n){
	if(n==1){
		return a[0];
	}else{
		return (f(a,n/2)+f(&a[n/2],n/2))&(f(a,n/2)-f(&a[n/2],n/2));
	}
}
int main(){
	int t,n,a[1010];
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("%d\n",f(a,n));
	}
	return 0;
}
