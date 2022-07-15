#include<stdio.h>
#include<math.h>

double dis(double x1,double y1,double z1,double x2,double y2,double z2){
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
}

int main(){
	double x[5],y[5],z[5];
	for(int i=1;i<=4;i++){
		scanf("%lf%lf%lf",&x[i],&y[i],&z[i]);
	}
	printf("%.2f\n",dis(x[2],y[2],z[2],x[4],y[4],z[4]));
	printf("%.2f\n",dis(x[1],y[1],z[1],x[3],y[3],z[3]));
	printf("%.2f\n",dis(x[2],y[2],z[2],x[3],y[3],z[3]));
	printf("%.2f\n",dis(x[4],y[4],z[4],x[3],y[3],z[3]));
	printf("%.2f\n",dis(x[1],y[1],z[1],x[2],y[2],z[2]));
	printf("%.2f\n",dis(x[1],y[1],z[1],x[4],y[4],z[4]));
	return 0;
}
