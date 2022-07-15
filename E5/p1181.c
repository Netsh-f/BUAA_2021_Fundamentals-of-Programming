#include<stdio.h>
int main(){
	int n,m,sum=0,t,cnt=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		sum+=t;
		if(sum>m){
			cnt++;
			sum=t;
		}
	}
	printf("%d\n",cnt+1);
	return 0;
}
