#include<stdio.h>
int main(){
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a[1000]={0};
		scanf("%d",&x);
		int j=0;
		while(x!=1){
			a[j]=(x%(-2)+2)%(-2);
			if(x<0)
				x=x/(-2)+a[j];
			else
				x=x/(-2);
			j++;
		}
		a[j]=1;
		for(;j>=0;j--){
			printf("%d",a[j]);
		}
		printf("\n");
	}
	return 0;
}
