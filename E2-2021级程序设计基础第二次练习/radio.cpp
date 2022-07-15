#include<stdio.h>
#include<math.h>

double len(double x1,double y1,double x2,double y2){
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main(){
	double xa,ya,xb,yb,xc,yc,xi,yi,a,b,c,r,p,s;
	scanf("(%lf,%lf)\n",&xa,&ya);
	scanf("(%lf,%lf)\n",&xb,&yb);
	scanf("(%lf,%lf)",&xc,&yc);
	a=len(xb,yb,xc,yc);
	b=len(xa,ya,xc,yc);
	c=len(xa,ya,xb,yb);
	xi=(a*xa+b*xb+c*xc)/(a+b+c);
	yi=(a*ya+b*yb+c*yc)/(a+b+c);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	r=2*s/(a+b+c);
	printf("(%.3f,%.3f)\n",xi,yi);
	if(fabs(xi)<1e-6){
		printf("x^2+(y%c%.3f)^2=%.3f^2\n",yi>0?'-':'+',fabs(yi),r);
	}else if(fabs(yi)<1e-6){
		printf("(x%c%.3f)^2+y^2=%.3f^2\n",xi>0?'-':'+',fabs(xi),r);
	}else if(fabs(xi)<1e-6&&fabs(yi)<1e-6){
		printf("x^2+y^2=%.3f^2\n",r);
	}else{
		printf("(x%c%.3f)^2+(y%c%.3f)^2=%.3f^2\n",xi>0?'-':'+',fabs(xi),yi>0?'-':'+',fabs(yi),r);
	}
	return 0;
}
