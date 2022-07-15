#include<stdio.h>
int main(){
	int n;
	double x,h,sum=0,sumh=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf%lf",&x,&h);
		sum=sum+(4-(3*(100-x)*(100-x))/1600)*h;
		sumh+=h;
	}
	printf("%.2f\n",sum/sumh);
	return 0;
}
