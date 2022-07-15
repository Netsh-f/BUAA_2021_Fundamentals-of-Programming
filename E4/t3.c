#include<stdio.h>
int main(){
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++){
		ans+=(n-1)/i;
	}
	printf("%d\n",ans);
	return 0;
}
