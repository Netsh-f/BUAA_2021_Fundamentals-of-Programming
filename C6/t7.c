#include<stdio.h>
int a[500010],f;
int findl(int key,int low,int high){
	int mid;
	f=0;
	while(low<=high){
		mid=(low+high)/2;
		if(key<=a[mid]){
			f=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	if(f==0)
		return -1;
	else
		return f;
}
int findu(int key,int low,int high){
	int mid;
	f=0;
	while(low<=high){
		mid=(low+high)/2;
		if(key<a[mid]){
			f=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	if(f==0)
		return -1;
	else
		return f;
}
int main(){
	int n,m,t;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&t);
		printf("%d %d\n",findl(t,1,n),findu(t,1,n));
	}
	return 0;
}
