#include<stdio.h>
#include<math.h>
int main(){
	double x[4],y[4],l[4];
	for(int i=1;i<=3;i++)
		scanf("%lf%lf",&x[i],&y[i]);
	x[0]=x[3];
	y[0]=y[3];
	for(int i=1;i<=3;i++){
		l[i]=sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2));
	}
	double ans=0;
	for(int i=1;i<=3;i++)
		ans+=l[i];
	printf("%.2lf",ans);
	return 0;
}
