#include<stdio.h>
int main(){
	int n;
	double x[105],y[105],r[105],ans;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf%lf",&x[i],&y[i],&r[i]);
		ans+=r[i]*r[i]*3.14;
	}
	printf("%.4f\n",ans);
	return 0;
}
