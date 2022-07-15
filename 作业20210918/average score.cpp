#include<stdio.h>
int main(){
	double a,sum=0,cnt=0;
	while(1){
		scanf("%lf",&a);
		if(a==-1)
			break;
		sum=sum+a;
		cnt++;
	}
	printf("%.2lf\n",sum/cnt);
	return 0;
}
