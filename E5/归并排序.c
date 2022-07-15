#include<stdio.h>
#define N 1000005
int n,a[N],b[N];
void merge_sort(int l,int r){
	if(l==r) return;
	int mid=(l+r)>>1;
	merge_sort(l,mid);merge_sort(mid+1,r);
	int L=l,R=mid+1,p=L;
	while(L<=mid&&R<=r){
		if(a[L]<=a[R]) b[p++]=a[L++];
		else b[p++]=a[R++];
	}
	while(L<=mid) b[p++]=a[L++];
	while(R<=r) b[p++]=a[R++];
	for(int i=l;i<=r;i++) a[i]=b[i];
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	merge_sort(1,n);
	for(int i=1;i<=n;i++) printf("%d ",a[i]);
	printf("\n");
	return 0;
}
