#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,x1,x2;
	while(scanf("%lf%lf%lf",&c,&b,&a)!=EOF){
		if(b*b-4*a*c<0){
			printf("NO Solution\n");
		}else if(b*b-4*a*c==0){
			printf("%.2f",-b/(2*a));
		}else{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			if(x1>x2){
				printf("%.2f %.2f\n",x2,x1);
			}else{
				printf("%.2f %.2f\n",x1,x2);
			}
		}
	}
	return 0;
}
