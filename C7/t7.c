#include<stdio.h>
int b[200010];
int main(){
	int n,k,t,ce,cnt=0;
	scanf("%d%d",&n,&k);
	ce=k/n;
	for(int i=1;i<=k;i++){
		scanf("%d",&t);
		b[t+100000]++;
	}
	for(int i=0;i<=200010;i++){
		if(b[i])
			cnt++;
	}
	printf("%d\n",ce>cnt?cnt:ce);
	return 0;
}
