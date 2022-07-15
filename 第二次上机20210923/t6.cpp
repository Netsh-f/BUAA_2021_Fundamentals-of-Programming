#include<stdio.h>
#include<math.h>
const double pai=3.1415926535;
const double e=2.718281828;
int main(){
	double x1,y1,z1;
	double a,b,c,o,p;
	double x,y,z;
	scanf("%lf%lf%lf",&x1,&y1,&z1);
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&o,&p);
	if(x1<0){
		x=(1/(sqrt(2*pai*c)))*pow(e,-(pow(x1-p,2)+pow(y1-p,2))/(2*c*c))*(x1+(z1*tan(2*o))/sqrt(a+(b*b)/(a*a))); 
	}else{
		x=(1/(sqrt(2*pai*c)))*pow(e,-(pow(x1-p,2)+pow(y1-p,2))/(2*c*c))*(x1-(z1*tan(2*o))/sqrt(a+(b*b)/(a*a))); 
	}
	y=(1/(sqrt(2*pai*c)))*pow(e,-(pow(x1-p,2)+pow(y1-p,2))/(2*c*c))*(y1+(b/a)*(x-x1));
	z=pow(atan(p*cos(x)),log(1+fabs(sin(x))))/(2+sinh(y));
	printf("%.2f\n%.2f\n%.2f",x,y,z);
	return 0;
}
