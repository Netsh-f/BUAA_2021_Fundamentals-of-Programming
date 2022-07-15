#include<stdio.h>
int main(){
	int n,m,a[3010],t=0,min=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<m;j++){
		min+=a[1+j];
	} 
	for(int i=1;i<=n-m+1;i++){
		t=0;
		for(int j=0;j<m;j++){
			t+=a[i+j];
		}
		if(t<min){
			min=t;
		}
	}
	printf("%d\n",min);
	return 0;
}
