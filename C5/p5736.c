#include<stdio.h>
int main(){
	int n,a[101],vis[101]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==1)
			vis[i]=1;
		for(int j=2;j<a[i];j++){
			if(a[i]%j==0)
				vis[i]=1;
		}
	}
	for(int i=0;i<n;i++){
		if(!vis[i])
			printf("%d ",a[i]);
	}
	return 0;
}
