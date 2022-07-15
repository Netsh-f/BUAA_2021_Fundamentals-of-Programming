#include<stdio.h>

int c(int m,int n){
	if(m<n)
		return 0;
	else if(n==0)
		return 1;
	else if(n==1)
		return m;
	else
		return c(m-1,n-1)+c(m-1,n);
}

int main(){
	int t,m,n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d%d",&m,&n);
		printf("%d\n",c(m,n));
	}
	return 0;
}
