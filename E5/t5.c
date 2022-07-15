#include<stdio.h>
#include<math.h>
double dis(double x1,double y1,double x2,double y2){
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main(){
	double x[4],y[4],d[4],p;
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		for(int j=1;j<=3;j++)
			scanf("%lf%lf",&x[j],&y[j]);
		x[0]=x[3];
		y[0]=y[3];
		for(int j=1;j<=3;j++){
			d[j]=dis(x[j-1],y[j-1],x[j],y[j]);
		}
		p=(d[1]+d[2]+d[3])/2;
		printf("%.3f %.3f\n",d[1]+d[2]+d[3],sqrt(p*(p-d[1])*(p-d[2])*(p-d[3])));
	}
	return 0;
}
