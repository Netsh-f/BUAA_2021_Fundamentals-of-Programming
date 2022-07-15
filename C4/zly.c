#include<stdio.h>
int main(){
	int a,b,r,n,i=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d%d",&a,&b);
	if(a<b){
		r=a;
		a=b;
		b=r;
	}
	for(r=a%b;r!=0;r=a%b){
		a=b;
		b=r;
	}
	printf("%d\n",a*b/r);
	return 0;
}
