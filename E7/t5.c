#include<stdio.h>
int b[10010];
int main(){
	int n,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		b[t]++;
	}
	for(int i=0;i<=10000;i++){
		if(b[i])
			printf("%d:%d\n",i,b[i]);
	}
	return 0;
}
