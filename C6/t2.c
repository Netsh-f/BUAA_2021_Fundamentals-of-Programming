#include<stdio.h>
int max(int x[],int n){
	int j=0;
	for(int i=1;i<n;i++){
		if(x[i]>x[j]){
			j=i;
		}
	}
	return j;
}
void selectSort(int x[],int n){
	int t,j;
	for(int i=n;i>1;i--){
		j=max(x,i);
		t=x[j];
		x[j]=x[i-1];
		x[i-1]=t;
	}
}
int main(){
	int n,k,q[2010],t;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&q[i]);
	}
	selectSort(q,n+1);
	for(int i=1;i<=k;i++){
		scanf("%d",&t);
		printf("%d\n",q[n-t+1]);
	}
	return 0;
}
