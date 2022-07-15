#include<stdio.h>
int main(){
	double r,h;
	scanf("%lf%lf",&r,&h);
	printf("Area = %.3f\n",2*3.14*r*r+2*3.14*r*h);
	return 0;
}
