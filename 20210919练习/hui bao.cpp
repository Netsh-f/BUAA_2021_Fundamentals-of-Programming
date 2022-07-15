#include<stdio.h>
int main(){
	double a,c;
	scanf("%lf%lf",&a,&c);
	printf("%.2lf\n",a*(1+c/100));
	return 0;
}
