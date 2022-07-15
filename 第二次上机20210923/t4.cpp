#include<stdio.h>
int main(){
	int n,x0,y0,p,q,r,x,y;
	scanf("%d\n",&n);
	scanf("(%d,%d)\n",&x0,&y0);
	scanf("%d%d%d\n",&p,&q,&r);
	for(int i=0;i<n-1;i++){
		scanf("(%d,%d)\n",&x,&y);
		x0-=x;
		y0-=y;
	}
	scanf("(%d,%d)",&x,&y);
	x0-=x;
	y0-=y;
	if((x0-p)*(x0-p)+(y0-q)*(y0-q)<=r*r){
		printf("No way!\n");
	}else{
		printf("(%d,%d)\n",x0,y0);
	}
	return 0;
}
