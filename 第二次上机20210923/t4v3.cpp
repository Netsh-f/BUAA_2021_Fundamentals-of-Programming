#include<stdio.h>
int main(){
	int n,x0,y0,p,q,r,x,y;
	scanf("%d\n",&n);
	scanf("(%d,%d)\n",&x0,&y0);
	scanf("%d%d%d\n",&p,&q,&r);
	for(int i=0;i<n;i++){
		scanf("(%d,%d)\n",&x,&y);
		x0-=x;
		y0-=y;
	}
	if((x0-x)*(x0-x)+(y0-y)*(y0-y)<=r*r){
		printf("No way!\n");
	}else{
		printf("(%d,%d)\n",x0,y0);
	}
	return 0;
}
