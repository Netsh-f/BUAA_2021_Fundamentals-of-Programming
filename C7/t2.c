#include<stdio.h>
int main(){
	int op,l,r;
	scanf("%d",&op);
	scanf("%d%d",&l,&r);
	for(double i=l;i<=r;i++){
		printf("%.0f %.2f\n",i,op==0?32+i*9/5:(i-32)*5/9);
	}
	return 0;
}
