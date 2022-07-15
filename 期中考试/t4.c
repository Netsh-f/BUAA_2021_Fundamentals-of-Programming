#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double x[105],y[105],t;
	scanf("%d ",&n);
	for(int i=1;i<=n;i++){
		scanf("(%lf,%lf) ",&x[i],&y[i]);
	}
	scanf("theta=%lf",&t);
	for(int i=1;i<=n;i++){
		printf("(%.2f,%.2f)\n",x[i]*cos(t)+y[i]*sin(t),y[i]*cos(t)-x[i]*sin(t));
	}
	return 0;
}
