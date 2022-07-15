#include<stdio.h>
#include<math.h>
const double pai=3.14159265358979323846;
int main(){
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		int k;
		double score[20];
		scanf("%d",&k);
		double angle=2*pai/k;
		double area=0;
		for(int i=0;i<k;i++){
			scanf("%lf",&score[i]);
		}
		score[k]=score[0];
		for(int i=0;i<k;i++){
			area+=score[i]*score[i+1]*sin(angle)/2;
		}
		double ans=area/(k*100*sin(angle)/2)*100;
		printf("%.4f\n",ans);
	}
	return 0;
}
