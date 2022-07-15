#include<stdio.h>
int main(){
	long long n,x0,y0,p,q,r,x,y;
	scanf("%lld\n",&n);
	scanf("(%lld,%lld)\n",&x0,&y0);
	scanf("%lld%lld%lld\n",&p,&q,&r);
	for(int i=0;i<n-1;i++){
		scanf("(%lld,%lld)\n",&x,&y);
		x0-=x;
		y0-=y;
	}
	scanf("(%lld,%lld)",&x,&y);
	x0-=x;
	y0-=y;
	if((x0-p)*(x0-p)+(y0-q)*(y0-q)<=r*r){
		printf("No way!\n");
	}else{
		printf("(%lld,%lld)\n",x0,y0);
	}
	return 0;
}
