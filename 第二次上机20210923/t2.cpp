#include<stdio.h>
int main(){
	double a[10],b[10];
	double ans;
	for(int i=0;i<10;i++){
		scanf("%lf",&a[i]);
	}
	for(int i=0;i<10;i++){
		scanf("%lf",&b[i]);
	}
	for(int i=0;i<10;i++){
		ans=ans+a[i]*b[i]/100;
	}
	printf("%.2f\n",ans);
	return 0;
}
